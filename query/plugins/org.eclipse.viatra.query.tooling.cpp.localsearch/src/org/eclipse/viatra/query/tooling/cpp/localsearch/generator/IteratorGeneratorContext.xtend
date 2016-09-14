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
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.InputUpdaterAPIGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.MatchGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.QueryGroupGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.iterator.IteratorMatcherGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.iterator.IteratorQuerySpecificationGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.model.QueryDescriptor

/**
 * @author Robert Doczi
 */
class IteratorGeneratorContext extends LocalsearchGeneratorOutputProvider {

	override initializeGenerators(QueryDescriptor query) {
		val List<IGenerator> generators = newArrayList

		query.patterns.forEach [name, patterns |
			val patternName = CaseFormat::LOWER_CAMEL.to(CaseFormat::UPPER_CAMEL, name.substring(name.lastIndexOf('.')+1))

			// TODO: WARNING! Incredible Hack Inc! works, but ugly...
			val matchGen = new MatchGenerator(query.name, patternName, patterns.head.patternBodies.head.matchingFrame)
			generators += matchGen
			
			val querySpec = new IteratorQuerySpecificationGenerator(query.name, patterns.toSet)
			generators += querySpec
			
			val matcherGen = new IteratorMatcherGenerator(query.name, patternName, patterns.toSet, matchGen, querySpec)
			generators += matcherGen
			
			if(patterns.exists[it | 
				it.patternBodies.exists[it | 
					it.PBody.pattern.allAnnotations.exists[it | it.name == "QueryBasedFeature"]
				]
				
			]){
				val annotations = patterns.map[patternBodies.map[PBody.pattern.allAnnotations].flatten.filter(it | it.name == "QueryBasedFeature")].flatten
				val featureName = annotations.get(0).getFirstValue("feature") as CharSequence;
				val updaterGen = new InputUpdaterAPIGenerator(query.name, patternName, featureName, patterns.toSet, matchGen, matcherGen, querySpec)
				generators += updaterGen
			}
		]

		val queryGroupGenerator = new QueryGroupGenerator(query)
		generators += queryGroupGenerator

		generators.forEach[initialize]

		return generators
	}

}