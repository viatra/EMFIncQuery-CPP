package org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common

import java.util.Set
import org.eclipse.emf.ecore.EClass
import org.eclipse.viatra.query.runtime.localsearch.exceptions.LocalSearchException
import org.eclipse.viatra.query.runtime.matchers.psystem.PVariable
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.ViatraQueryHeaderGenerator
import org.eclipse.viatra.query.tooling.cpp.localsearch.model.PatternDescriptor
import org.eclipse.viatra.query.tooling.cpp.localsearch.planner.util.CompilerHelper

class InputUpdaterAPIGenerator extends ViatraQueryHeaderGenerator {

	protected val String name
	protected val PatternDescriptor pattern
	protected val MatchGenerator matchGenerator
	protected val MatcherGenerator matcherGenerator

	protected val QuerySpecificationGenerator querySpecification
	protected val CharSequence featureName
	protected val int arity
	protected val PVariable src
	protected val EClass srcClassifier
	protected val PVariable srcID
	protected val PVariable trg
	protected val PVariable trgID


	new(String queryName, String patternName, CharSequence featureName, Set<PatternDescriptor> patternGroup, MatchGenerator matchGenerator, MatcherGenerator matcherGenerator, QuerySpecificationGenerator querySpecification) {
		super(#{queryName}, '''«patternName.toFirstUpper»InputUpdater''')
		this.name = patternName.toFirstUpper
		this.pattern = patternGroup.maxBy[it | it.boundParameters.size]
		this.matchGenerator = matchGenerator
		this.matcherGenerator = matcherGenerator
		this.querySpecification = querySpecification
		this.featureName = featureName

		//Refactor not guaranteed the order
		this.src = this.pattern.patternBodies.head.PBody.allVariables.get(0)
		this.srcID = this.pattern.patternBodies.head.PBody.allVariables.get(1)
		this.trg = this.pattern.patternBodies.head.PBody.allVariables.get(2)
		this.trgID = this.pattern.patternBodies.head.PBody.allVariables.get(3)

		this.srcClassifier = CompilerHelper::getLeastStrictType(this.src) as EClass
		if(this.srcClassifier == null) throw new LocalSearchException("Query Based Feature doesn't exists")
		this.arity = this.srcClassifier.getEStructuralFeature(this.featureName.toString).upperBound
	}

	override initialize() {
		includes += new Include("stdexcept", true)
		includes += new Include("algorithm", true)
		includes += new Include("Viatra/Query/QueryEngine.h")
		includes += new Include("Viatra/Query/Matcher/ModelIndex.h")
		includes += new Include('''Viatra/Query/«querySpecification.queryName»/«name»Matcher.h''')
	}

	override compileInner() '''
	«val srcPointerType = matcherGenerator.type(src,matchGenerator.oneOfTheMatchingFrames)»
	«val srcType = srcPointerType.subSequence(0,srcPointerType.length-1)»
	«val trgPointerType = matcherGenerator.type(trg,matchGenerator.oneOfTheMatchingFrames)»
	«val trgType = trgPointerType.subSequence(0,trgPointerType.length-1)»
	struct «name»InputUpdate{
		/*
		 * It is generated for only sending vector coordinates into the model instance.
		 * The Derived feature has a source and a target, their id must be given in update function parameter i.e. (srcID, trgID, ...).
		 * If that isn't guaranteed this code crashes in compile time.
		 */
		static void update(::Viatra::Query::ModelRoot* modelRoot,«matcherGenerator.getParamList(pattern)»){
			/*
			 * Critical Section START
			 * Atomicity is mandatory
			 * Not supported parallel modifications and queries
			 */
			auto srcInstanceList = ModelIndex<«srcType», ::Viatra::Query::ModelRoot>::instances(modelRoot);
			auto srcIDPredicate = [=](const «srcPointerType» src){
				return src->id == «srcID.name»;
			};

			auto srcObj = std::find_if(srcInstanceList.begin(), srcInstanceList.end(), srcIDPredicate);

			if(srcObj == srcInstanceList.end()) throw new std::invalid_argument("«srcType» ID not found");

			auto engine = QueryEngine<::Viatra::Query::ModelRoot>::of(modelRoot);
			auto «featureName»Matcher = engine.template matcher< «querySpecification.querySpecificationName» >();
			auto matches = «featureName»Matcher.matches(«pattern.boundParameters.map[it.name].join(", ")»);

			auto trgInstanceList = ModelIndex<«trgType», ::Viatra::Query::ModelRoot>::instances(modelRoot);
			auto trgIDPredicate = [=](const «trgPointerType» trg){
				return trg->id == «trgID.name»;
			};

			auto trgIt = std::find_if(trgInstanceList.begin(), trgInstanceList.end(), trgIDPredicate);

			if(trgIt == trgInstanceList.end()) throw new std::invalid_argument("«trgType» ID not found");

			«IF arity != 1»
			auto tempTrg = std::find_if((*srcObj)->«featureName».begin(), (*srcObj)->«featureName».end(), trgIDPredicate);
			if(matches.size() > 0){				
				if(tempTrg == (*srcObj)->«featureName».end()){
					(*srcObj)->«featureName».push_back(*trgIt);
				}
		}else if(tempTrg != (*srcObj)->«featureName».end()){
					(*srcObj)->«featureName».erase(tempTrg);
		}
				«ELSE»
			if(matches.size() > 0){
				(*srcObj)->«featureName» = (*trgIt);
		}else if((*trgIt) == (*srcObj)->«featureName»){
				(*srcObj)->«featureName» = nullptr;
	 	}
			«ENDIF»

			/*
			* Critical Section END
			*/
		}
	};
	'''

	override compileOuter() '''

	'''

}
