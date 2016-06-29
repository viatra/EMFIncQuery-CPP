package hu.bme.mit.incquery.localsearch.cpp.generator.model

import com.google.common.base.Optional
import java.util.List
import java.util.Map
import org.eclipse.emf.ecore.EClassifier
import org.eclipse.viatra.query.runtime.matchers.psystem.PVariable
import org.eclipse.viatra.query.runtime.matchers.psystem.queries.PParameter
import org.eclipse.xtend.lib.annotations.Data

import static com.google.common.base.Preconditions.*
import com.google.common.collect.Maps
import com.google.common.collect.ImmutableList

class MatchingFrameStub {

	val Map<PVariable, VariableInfo> variableInfoMap
	val Map<String, PVariable> parameterNameToVariableMap 

	new(List<VariableInfo> paramTypes) {
		variableInfoMap = Maps::uniqueIndex(paramTypes) [variable]
		parameterNameToVariableMap = Maps::newHashMap
		paramTypes.filter[parameter.present].forEach[parameterNameToVariableMap.put(parameter.get.name, variable)]
	}

	def getVariableStrictType(PVariable variable) {
		checkNotNull(variable)
		variableInfoMap.get(variable).type.strictType
	}
	
	def getVariableLooseType(PVariable variable) {
		checkNotNull(variable)
		variableInfoMap.get(variable).type.looseType
	}
	
	def getVariablePosition(PVariable variable) {
		checkNotNull(variable)
		variableInfoMap.get(variable).position
	}
	
	def getVariableFromParameter(PParameter parameter) {
		checkNotNull(parameter)
		parameterNameToVariableMap.get(parameter.name)
	}
	
	def getParameterFromVariable(PVariable variable) {
		checkNotNull(variable)
		variableInfoMap.get(variable).parameter		
	}
	
	def getAllVariables() {
		// copy it to evaluate
		ImmutableList::copyOf(variableInfoMap.values.map[variable])
	}
	
	def getParameters() {
		// copy it to evaluate
		ImmutableList::copyOf(variableInfoMap.values.filter[parameter.present].map[parameter.get])
	}
	
	def getAllTypes() {
		ImmutableList::copyOf(variableInfoMap.values.map[type].filterNull)
	}
}

@Data
class VariableInfo {
	Optional<PParameter> parameter
	PVariable variable
	TypeInfo type
	int position
	
	def isKey() {
		parameter.present
	}
}

@Data
class TypeInfo {
	EClassifier looseType
	EClassifier strictType
}