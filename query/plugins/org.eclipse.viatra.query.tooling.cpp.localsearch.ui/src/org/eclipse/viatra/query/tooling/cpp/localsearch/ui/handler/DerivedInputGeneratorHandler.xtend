package org.eclipse.viatra.query.tooling.cpp.localsearch.ui.handler

import com.google.inject.Inject
import com.google.inject.Injector
import org.eclipse.viatra.query.tooling.cpp.localsearch.generator.RuntimeGeneratorContext
import org.eclipse.core.commands.AbstractHandler
import org.eclipse.core.commands.ExecutionEvent
import org.eclipse.core.commands.ExecutionException

class DerivedInputGeneratorHandler extends AbstractHandler {
	
	@Inject Injector injector	
	
	override execute(ExecutionEvent event) throws ExecutionException {
		val generatorHandler = injector.getInstance(GeneratorHandler)
		generatorHandler.generate(event, RuntimeGeneratorContext)
		return null
	}

}