/**
 * Generated from platform:/resource/hu.bme.mit.localsearch.cpp.tool.cpsTest/src/hu/bme/mit/localsearch/cpp/tool/cpstest/query/query.vql
 */
package hu.bme.mit.localsearch.cpp.tool.cpstest.query.util;

import com.google.common.collect.Sets;
import hu.bme.mit.localsearch.cpp.tool.cpstest.query.AppTypeInstanceAndHostMatch;
import hu.bme.mit.localsearch.cpp.tool.cpstest.query.AppTypeInstanceAndHostMatcher;
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
import org.eclipse.viatra.query.runtime.matchers.psystem.basicenumerables.TypeConstraint;
import org.eclipse.viatra.query.runtime.matchers.psystem.queries.PParameter;
import org.eclipse.viatra.query.runtime.matchers.psystem.queries.QueryInitializationException;
import org.eclipse.viatra.query.runtime.matchers.tuple.FlatTuple;

/**
 * A pattern-specific query specification that can instantiate AppTypeInstanceAndHostMatcher in a type-safe way.
 * 
 * @see AppTypeInstanceAndHostMatcher
 * @see AppTypeInstanceAndHostMatch
 * 
 */
@SuppressWarnings("all")
public final class AppTypeInstanceAndHostQuerySpecification extends BaseGeneratedEMFQuerySpecification<AppTypeInstanceAndHostMatcher> {
  private AppTypeInstanceAndHostQuerySpecification() {
    super(GeneratedPQuery.INSTANCE);
  }
  
  /**
   * @return the singleton instance of the query specification
   * @throws ViatraQueryException if the pattern definition could not be loaded
   * 
   */
  public static AppTypeInstanceAndHostQuerySpecification instance() throws ViatraQueryException {
    try{
    	return LazyHolder.INSTANCE;
    } catch (ExceptionInInitializerError err) {
    	throw processInitializerError(err);
    }
  }
  
  @Override
  protected AppTypeInstanceAndHostMatcher instantiate(final ViatraQueryEngine engine) throws ViatraQueryException {
    return AppTypeInstanceAndHostMatcher.on(engine);
  }
  
  @Override
  public AppTypeInstanceAndHostMatch newEmptyMatch() {
    return AppTypeInstanceAndHostMatch.newEmptyMatch();
  }
  
  @Override
  public AppTypeInstanceAndHostMatch newMatch(final Object... parameters) {
    return AppTypeInstanceAndHostMatch.newMatch((org.eclipse.viatra.examples.cps.cyberPhysicalSystem.ApplicationType) parameters[0], (org.eclipse.viatra.examples.cps.cyberPhysicalSystem.ApplicationInstance) parameters[1], (org.eclipse.viatra.examples.cps.cyberPhysicalSystem.HostInstance) parameters[2]);
  }
  
  /**
   * Inner class allowing the singleton instance of {@link AppTypeInstanceAndHostQuerySpecification} to be created 
   * 	<b>not</b> at the class load time of the outer class, 
   * 	but rather at the first call to {@link AppTypeInstanceAndHostQuerySpecification#instance()}.
   * 
   * <p> This workaround is required e.g. to support recursion.
   * 
   */
  private static class LazyHolder {
    private final static AppTypeInstanceAndHostQuerySpecification INSTANCE = new AppTypeInstanceAndHostQuerySpecification();
    
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
    private final static AppTypeInstanceAndHostQuerySpecification.GeneratedPQuery INSTANCE = new GeneratedPQuery();
    
    @Override
    public String getFullyQualifiedName() {
      return "hu.bme.mit.localsearch.cpp.tool.cpstest.query.appTypeInstanceAndHost";
    }
    
    @Override
    public List<String> getParameterNames() {
      return Arrays.asList("app","appInstance","hostInstance");
    }
    
    @Override
    public List<PParameter> getParameters() {
      return Arrays.asList(
      			 new PParameter("app", "org.eclipse.viatra.examples.cps.cyberPhysicalSystem.ApplicationType"),
      			 new PParameter("appInstance", "org.eclipse.viatra.examples.cps.cyberPhysicalSystem.ApplicationInstance"),
      			 new PParameter("hostInstance", "org.eclipse.viatra.examples.cps.cyberPhysicalSystem.HostInstance")
      			);
    }
    
    @Override
    public Set<PBody> doGetContainedBodies() throws QueryInitializationException {
      Set<PBody> bodies = Sets.newLinkedHashSet();
      try {
      	{
      		PBody body = new PBody(this);
      		PVariable var_app = body.getOrCreateVariableByName("app");
      		PVariable var_appInstance = body.getOrCreateVariableByName("appInstance");
      		PVariable var_hostInstance = body.getOrCreateVariableByName("hostInstance");
      		body.setSymbolicParameters(Arrays.<ExportedParameter>asList(
      		   new ExportedParameter(body, var_app, "app"),
      		   new ExportedParameter(body, var_appInstance, "appInstance"),
      		   new ExportedParameter(body, var_hostInstance, "hostInstance")
      		));
      		// 	ApplicationInstance.type(appInstance, app)
      		new TypeConstraint(body, new FlatTuple(var_appInstance), new EClassTransitiveInstancesKey((EClass)getClassifierLiteral("http://org.eclipse.viatra/model/cps", "ApplicationInstance")));
      		PVariable var__virtual_0_ = body.getOrCreateVariableByName(".virtual{0}");
      		new TypeConstraint(body, new FlatTuple(var_appInstance, var__virtual_0_), new EStructuralFeatureInstancesKey(getFeatureLiteral("http://org.eclipse.viatra/model/cps", "ApplicationInstance", "type")));
      		new Equality(body, var__virtual_0_, var_app);
      		// 	ApplicationInstance.allocatedTo(appInstance, hostInstance)
      		new TypeConstraint(body, new FlatTuple(var_appInstance), new EClassTransitiveInstancesKey((EClass)getClassifierLiteral("http://org.eclipse.viatra/model/cps", "ApplicationInstance")));
      		PVariable var__virtual_1_ = body.getOrCreateVariableByName(".virtual{1}");
      		new TypeConstraint(body, new FlatTuple(var_appInstance, var__virtual_1_), new EStructuralFeatureInstancesKey(getFeatureLiteral("http://org.eclipse.viatra/model/cps", "ApplicationInstance", "allocatedTo")));
      		new Equality(body, var__virtual_1_, var_hostInstance);
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