/**
 * Generated from platform:/resource/hu.bme.mit.localsearch.cpp.tool.cpsTest/src/hu/bme/mit/localsearch/cpp/tool/cpstest/query/query.vql
 */
package hu.bme.mit.localsearch.cpp.tool.cpstest.query.util;

import com.google.common.collect.Sets;
import hu.bme.mit.localsearch.cpp.tool.cpstest.query.InitialStateNotContainedByStateMachineMatch;
import hu.bme.mit.localsearch.cpp.tool.cpstest.query.InitialStateNotContainedByStateMachineMatcher;
import hu.bme.mit.localsearch.cpp.tool.cpstest.query.util.StatemachineStateQuerySpecification;
import java.util.Arrays;
import java.util.List;
import java.util.Set;
import org.eclipse.emf.ecore.EClass;
import org.eclipse.viatra.query.runtime.api.ViatraQueryEngine;
import org.eclipse.viatra.query.runtime.api.impl.BaseGeneratedEMFPQuery;
import org.eclipse.viatra.query.runtime.api.impl.BaseGeneratedEMFQuerySpecification;
import org.eclipse.viatra.query.runtime.emf.types.EClassTransitiveInstancesKey;
import org.eclipse.viatra.query.runtime.emf.types.EStructuralFeatureInstancesKey;
import org.eclipse.viatra.query.runtime.exception.ViatraQueryException;
import org.eclipse.viatra.query.runtime.matchers.psystem.PBody;
import org.eclipse.viatra.query.runtime.matchers.psystem.PVariable;
import org.eclipse.viatra.query.runtime.matchers.psystem.basicdeferred.Equality;
import org.eclipse.viatra.query.runtime.matchers.psystem.basicdeferred.ExportedParameter;
import org.eclipse.viatra.query.runtime.matchers.psystem.basicdeferred.NegativePatternCall;
import org.eclipse.viatra.query.runtime.matchers.psystem.basicenumerables.TypeConstraint;
import org.eclipse.viatra.query.runtime.matchers.psystem.queries.PParameter;
import org.eclipse.viatra.query.runtime.matchers.psystem.queries.QueryInitializationException;
import org.eclipse.viatra.query.runtime.matchers.tuple.FlatTuple;

/**
 * A pattern-specific query specification that can instantiate InitialStateNotContainedByStateMachineMatcher in a type-safe way.
 * 
 * @see InitialStateNotContainedByStateMachineMatcher
 * @see InitialStateNotContainedByStateMachineMatch
 * 
 */
@SuppressWarnings("all")
public final class InitialStateNotContainedByStateMachineQuerySpecification extends BaseGeneratedEMFQuerySpecification<InitialStateNotContainedByStateMachineMatcher> {
  private InitialStateNotContainedByStateMachineQuerySpecification() {
    super(GeneratedPQuery.INSTANCE);
  }
  
  /**
   * @return the singleton instance of the query specification
   * @throws ViatraQueryException if the pattern definition could not be loaded
   * 
   */
  public static InitialStateNotContainedByStateMachineQuerySpecification instance() throws ViatraQueryException {
    try{
    	return LazyHolder.INSTANCE;
    } catch (ExceptionInInitializerError err) {
    	throw processInitializerError(err);
    }
  }
  
  @Override
  protected InitialStateNotContainedByStateMachineMatcher instantiate(final ViatraQueryEngine engine) throws ViatraQueryException {
    return InitialStateNotContainedByStateMachineMatcher.on(engine);
  }
  
  @Override
  public InitialStateNotContainedByStateMachineMatch newEmptyMatch() {
    return InitialStateNotContainedByStateMachineMatch.newEmptyMatch();
  }
  
  @Override
  public InitialStateNotContainedByStateMachineMatch newMatch(final Object... parameters) {
    return InitialStateNotContainedByStateMachineMatch.newMatch((org.eclipse.viatra.examples.cps.cyberPhysicalSystem.StateMachine) parameters[0], (org.eclipse.viatra.examples.cps.cyberPhysicalSystem.State) parameters[1]);
  }
  
  /**
   * Inner class allowing the singleton instance of {@link InitialStateNotContainedByStateMachineQuerySpecification} to be created 
   * 	<b>not</b> at the class load time of the outer class, 
   * 	but rather at the first call to {@link InitialStateNotContainedByStateMachineQuerySpecification#instance()}.
   * 
   * <p> This workaround is required e.g. to support recursion.
   * 
   */
  private static class LazyHolder {
    private final static InitialStateNotContainedByStateMachineQuerySpecification INSTANCE = new InitialStateNotContainedByStateMachineQuerySpecification();
    
    /**
     * Statically initializes the query specification <b>after</b> the field {@link #INSTANCE} is assigned.
     * This initialization order is required to support indirect recursion.
     * 
     * <p> The static initializer is defined using a helper field to work around limitations of the code generator.
     * 
     */
    private final static Object STATIC_INITIALIZER = ensureInitialized();
    
    public static Object ensureInitialized() {
      INSTANCE.ensureInitializedInternalSneaky();
      return null;
    }
  }
  
  private static class GeneratedPQuery extends BaseGeneratedEMFPQuery {
    private final static InitialStateNotContainedByStateMachineQuerySpecification.GeneratedPQuery INSTANCE = new GeneratedPQuery();
    
    @Override
    public String getFullyQualifiedName() {
      return "hu.bme.mit.localsearch.cpp.tool.cpstest.query.initialStateNotContainedByStateMachine";
    }
    
    @Override
    public List<String> getParameterNames() {
      return Arrays.asList("statemachine","state");
    }
    
    @Override
    public List<PParameter> getParameters() {
      return Arrays.asList(
      			 new PParameter("statemachine", "org.eclipse.viatra.examples.cps.cyberPhysicalSystem.StateMachine"),
      			 new PParameter("state", "org.eclipse.viatra.examples.cps.cyberPhysicalSystem.State")
      			);
    }
    
    @Override
    public Set<PBody> doGetContainedBodies() throws QueryInitializationException {
      Set<PBody> bodies = Sets.newLinkedHashSet();
      try {
      	{
      		PBody body = new PBody(this);
      		PVariable var_statemachine = body.getOrCreateVariableByName("statemachine");
      		PVariable var_state = body.getOrCreateVariableByName("state");
      		body.setSymbolicParameters(Arrays.<ExportedParameter>asList(
      		   new ExportedParameter(body, var_statemachine, "statemachine"),
      		   new ExportedParameter(body, var_state, "state")
      		));
      		// 	StateMachine.initial(statemachine, state)
      		new TypeConstraint(body, new FlatTuple(var_statemachine), new EClassTransitiveInstancesKey((EClass)getClassifierLiteral("http://org.eclipse.viatra/model/cps", "StateMachine")));
      		PVariable var__virtual_0_ = body.getOrCreateVariableByName(".virtual{0}");
      		new TypeConstraint(body, new FlatTuple(var_statemachine, var__virtual_0_), new EStructuralFeatureInstancesKey(getFeatureLiteral("http://org.eclipse.viatra/model/cps", "StateMachine", "initial")));
      		new Equality(body, var__virtual_0_, var_state);
      		// 	neg find statemachineState(statemachine, state)
      		new NegativePatternCall(body, new FlatTuple(var_statemachine, var_state), StatemachineStateQuerySpecification.instance().getInternalQueryRepresentation());
      		bodies.add(body);
      	}
      	// to silence compiler error
      	if (false) throw new ViatraQueryException("Never", "happens");
      } catch (ViatraQueryException ex) {
      	throw processDependencyException(ex);
      }
      return bodies;
    }
  }
}