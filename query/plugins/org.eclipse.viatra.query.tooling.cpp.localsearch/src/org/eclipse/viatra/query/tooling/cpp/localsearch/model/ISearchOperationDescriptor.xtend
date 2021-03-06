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
package org.eclipse.viatra.query.tooling.cpp.localsearch.model

import java.util.Map
import java.util.Set
import org.eclipse.emf.ecore.EClassifier
import org.eclipse.emf.ecore.EStructuralFeature
import org.eclipse.viatra.query.runtime.matchers.psystem.PVariable
import org.eclipse.viatra.query.tooling.cpp.localsearch.planner.MatcherReference
import org.eclipse.xtend.lib.annotations.Accessors
import org.eclipse.xtend.lib.annotations.Data

/**
 * @author Robert Doczi
 * 
 */
interface ISearchOperationDescriptor {
}

@Data
abstract class AbstractSearchOperationDescriptor implements ISearchOperationDescriptor{

	val MatchingFrameDescriptor matchingFrame

}

@Data 
class InstanceOfDescriptor extends AbstractSearchOperationDescriptor {

	val PVariable variable

	val EClassifier key

}

@Data class SingleNavigationDescriptor extends AbstractSearchOperationDescriptor {

	val PVariable source
	val PVariable target

	val EStructuralFeature key
}

@Data class MultiNavigationDescriptor extends SingleNavigationDescriptor {

}

@Data class ExpressionDescriptor extends AbstractSearchOperationDescriptor {

	val Set<PVariable> variables

	val CharSequence expression

}

@Data class CheckInstanceOfDescriptor extends InstanceOfDescriptor {

	public static val String NAME = "InstanceOfCheck"

}

@Data class CheckSingleNavigationDescriptor extends SingleNavigationDescriptor {

	public static val String NAME = "SingleAssociationCheck"

}

@Data class CheckConstantValueDescriptor extends AbstractSearchOperationDescriptor{
	public static val String NAME = "ConstantValueCheck"
	val PVariable variable
	val Object value
}

@Data class CheckInequalityDescriptor extends AbstractSearchOperationDescriptor{
	public static val String NAME = "InequalityCheck"
	val PVariable who
	val PVariable withWhom
}

@Data class CheckExpressionDescriptor extends AbstractSearchOperationDescriptor{
	public static val String NAME = "CheckExpression"
	val Set<PVariable> variables
	val Map<PVariable, EClassifier> types 
	val CharSequence expressionAsStr
}

@Data class CheckMultiNavigationDescriptor extends MultiNavigationDescriptor {

	public static val String NAME = "MultiAssociationCheck"

}

@Data abstract class DependentSearchOperationDescriptor extends AbstractSearchOperationDescriptor {
	@Accessors(NONE) val Set<MatcherReference> dependencies

	def getDependencies() {
		dependencies
	}

}

@Data class NACOperationDescriptor extends DependentSearchOperationDescriptor {
	public static val String NAME = "NACOperation"

	val CharSequence matcher
	val Set<PVariable> bindings

}

@Data class BinaryTransitiveClosureDescriptor extends DependentSearchOperationDescriptor{
	public static val String NAME = "TransitiveClosureCheck"

	val CharSequence matcherName
	val CharSequence matchName
	val Set<PVariable> bindings
	val PVariable source //For iterator based approach
	val PVariable target //For iterator based approach
	val CharSequence refferedQueryMatchTargetMemberName
}

@Data class PatternMatchCounterCheckDescription extends DependentSearchOperationDescriptor{
	public static val String NAME = "PatternMatchCounterCheck"
	val CharSequence matcher
	val Set<PVariable> bindings
	val PVariable resultVariable
}

@Data class PatternMatchCounterExtendDescription extends DependentSearchOperationDescriptor{
	public static val String NAME = "PatternMatchCounterExtend"
	val CharSequence matcher
	val Set<PVariable> bindings
	val PVariable resultVariable
}

@Data class ExtendInstanceOfDescriptor extends InstanceOfDescriptor {

	public static val String NAME = "IterateOverInstances"

}


@Data class ExtendSingleNavigationDescriptor extends SingleNavigationDescriptor {

	public static val String NAME = "NavigateSingleAssociation"

}

@Data class ExtendMultiNavigationDescriptor extends MultiNavigationDescriptor {

	public static val String NAME = "NavigateMultiAssociation"

}

@Data class ExtendConstantValueDescriptor extends AbstractSearchOperationDescriptor{
	public static val String NAME = "ConstantValueExtend"
	val PVariable variable
	val Object value
}

@Data class ExtendExpressionDescriptor extends ExpressionDescriptor {
}
