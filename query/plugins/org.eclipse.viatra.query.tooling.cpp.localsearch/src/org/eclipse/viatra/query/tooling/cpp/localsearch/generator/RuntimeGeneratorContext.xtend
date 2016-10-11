/*******************************************************************************
 * Copyright (c) 2014-2016 Robert Doczi, IncQuery Labs Ltd.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Robert Doczi - initial API and implementation
 *******************************************************************************/
package org.eclipse.viatra.query.tooling.cpp.localsearch.generator

import com.google.common.base.CaseFormat
import java.util.List
import java.util.Set
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.MatchGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.QueryGroupGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.QueryIncludeGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.runtime.MatchingFrameGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.runtime.QueryRunnerFactoryGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.runtime.RuntimeMatcherGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.runtime.RuntimeQuerySpecificationGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.model.PatternGroupDescriptor
import org.eclipse.viatra.query.tooling.cpp.localsearch.model.QueryDescriptor
import org.eclipse.viatra.query.tooling.cpp.localsearch.proto.ProtoCompiler
import org.eclipse.viatra.query.tooling.cpp.localsearch.proto.ProtoGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.proto.ProtobufMatchCompiler
import org.eclipse.viatra.query.tooling.cpp.localsearch.proto.ProtobufMatchingFrameCompiler

/**
 * @author Robert Doczi
 */
class RuntimeGeneratorContext extends LocalsearchGeneratorOutputProvider {

	override initializeGenerators(QueryDescriptor query) {
		val List<IGenerator> generators = newArrayList
		val Set<ProtoCompiler> protoCompilers = newHashSet
		val Set<PatternGroupDescriptor> patternGroupSets = newHashSet
		query.patternGroups.forEach [ name, patternGroup |
			
			val frameGenMap = newHashMap
			val patternName = CaseFormat::LOWER_CAMEL.to(CaseFormat::UPPER_CAMEL, name)
			patternGroup.boundedPatterns.forEach[
				patternBodies.forEach[ patternBody |
					val matchingFrameGenerator = new MatchingFrameGenerator(query.name, patternName, patternBody.index, patternBody.matchingFrame)
					frameGenMap.put(patternBody, matchingFrameGenerator)
					generators += matchingFrameGenerator

					val protoMatchingFrameCompiler
						= new ProtobufMatchingFrameCompiler(query.name, patternName, patternBody.index, patternBody.matchingFrame)
					protoCompilers += protoMatchingFrameCompiler
				]
			]

			val aMatchingFrame = patternGroup.boundedPatterns.head.patternBodies.head.matchingFrame

			// TODO: WARNING! Incredible Hack Inc! works, but ugly...
			val matchGen = new MatchGenerator(query.name, patternName, aMatchingFrame)
			generators += matchGen

			// ... I use this hack too hope it still works
			val protoMatchCompiler = new ProtobufMatchCompiler(query.name, patternName, aMatchingFrame)
			protoCompilers += protoMatchCompiler

			val querySpec = new RuntimeQuerySpecificationGenerator(query.name, patternGroup, frameGenMap)
			generators += querySpec
			patternGroupSets.add(patternGroup);
			
			val matcherGen = new RuntimeMatcherGenerator(query.name, patternName, patternGroup, frameGenMap, matchGen, querySpec)
			generators += matcherGen
			
			val	includeGen = new QueryIncludeGenerator(query.name, patternGroup)
			generators += includeGen
		]

		generators += new ProtoGenerator(protoCompilers)

		val queryGroupGenerator = new QueryGroupGenerator(query)
		generators += queryGroupGenerator
		
		generators += new QueryRunnerFactoryGenerator(query);

		generators.forEach[initialize]

		return generators

	}

}
