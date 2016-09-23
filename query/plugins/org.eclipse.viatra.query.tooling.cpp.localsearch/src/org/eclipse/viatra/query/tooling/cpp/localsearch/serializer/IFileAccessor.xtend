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
package org.eclipse.viatra.query.tooling.cpp.localsearch.serializer

/**
 * @author Robert Doczi
 */
interface IFileAccessor {

	def void createFile(String folderPath, String fileName, CharSequence contents)

	def void deleteFile(String folderPath, String fileName)

	def void createFolder(String folderPath, String folderName)
	
	def String localURI(String string)

}