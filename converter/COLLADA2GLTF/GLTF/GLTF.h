// Copyright (c) 2013, Motorola Mobility, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of the Motorola Mobility, Inc. nor the names of its
//    contributors may be used to endorse or promote products derived from this
//    software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef __GLTF_H__
#define __GLTF_H__

// system & STL headers
#include <algorithm>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "assert.h"

#ifdef WIN32
#include <memory>
#include <unordered_map>
#else 
#include <tr1/memory>
#include <tr1/unordered_map>
#endif

// RapidJSON headers
#include "prettywriter.h"	
#include "filestream.h"

// GLTF headers
#include "GLTFTypesAndConstants.h"
#include "JSONValue.h"
#include "JSONNumber.h"
#include "JSONString.h"
#include "JSONObject.h"
#include "JSONArray.h"
#include "GLTFUtils.h"
#include "GLTFBuffer.h"
#include "GLTFMeshAttribute.h"
#include "GLTFIndices.h"
#include "GLTFEffect.h"
#include "GLTFPrimitive.h"
#include "GLTFMesh.h"
#include "GLTFSkin.h"
#include "GLTFAnimation.h"
#include "GLTFWriter.h"

#endif 
