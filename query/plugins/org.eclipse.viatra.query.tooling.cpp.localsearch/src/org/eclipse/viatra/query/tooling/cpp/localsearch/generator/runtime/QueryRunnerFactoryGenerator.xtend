package org.eclipse.viatra.query.tooling.cpp.localsearch.generator.runtime

import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.ViatraQueryHeaderGenerator
import java.util.Set
import org.eclipse.viatra.query.tooling.cpp.localsearch.model.BoundedPatternDescriptor
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.common.Include

class QueryRunnerFactoryGenerator extends ViatraQueryHeaderGenerator {
	
	protected val Set<Set<BoundedPatternDescriptor>> patternGroupSet
	protected val String queryGroupName
	
	
	new(String queryGroupName, Set<Set<BoundedPatternDescriptor>> patternGroupSet) {
		super(#{queryGroupName.toFirstUpper}, '''QueryRunnerFactory''')
		this.patternGroupSet = patternGroupSet
		this.queryGroupName = queryGroupName.toFirstUpper
	}
	
	override initialize() {
		includes += new Include('''stdexcept''', true)
		
		for(patternGroup: patternGroupSet)
		{
			val pattern = patternGroup.head;
			includes += new Include('''Viatra/Query/«queryGroupName»/«pattern.name»QuerySpecification.h''')
		}
	}

	// TODO: Iterating over the bodies giving them indices makes the generated code nondeterministic
	override compileInner() '''
		
		template<class ModelRoot>
		class QueryRunnerFactory{
		public:

			std::unique_ptr<QueryRunnerBase> Create(int queryID, int64_t sessionID)
			{
				switch(queryID){
					«FOR patternGroup : patternGroupSet»
						«val pattern = patternGroup.head»
						case «pattern.queryID»:
							return std::make_unique<QueryRunner<«pattern.name»QuerySpecification<ModelRoot>>>(sessionID);
					«ENDFOR»
				}
				throw std::invalid_argument("Cannot instantiate Query runner from the given queryID!");
			}	
		
		};
	'''
		
}
