/*
 * Copyright 1999-2000,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: PTXDefs.hpp,v 1.1 2006/08/10 00:17:07 nsuri Exp $
 */

// ---------------------------------------------------------------------------
//  Dynix/PTX runs in little endian mode
// ---------------------------------------------------------------------------
#define ENDIANMODE_LITTLE
typedef void* FileHandle;

#ifndef PTX
#define PTX
#endif
