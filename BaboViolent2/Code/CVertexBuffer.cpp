/*
	Copyright 2012 bitHeads inc.

	This file is part of the BaboViolent 2 source code.

	The BaboViolent 2 source code is free software: you can redistribute it and/or 
	modify it under the terms of the GNU General Public License as published by the 
	Free Software Foundation, either version 3 of the License, or (at your option) 
	any later version.

	The BaboViolent 2 source code is distributed in the hope that it will be useful, 
	but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
	FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along with the 
	BaboViolent 2 source code. If not, see http://www.gnu.org/licenses/.
*/

#ifndef CONSOLE
#include "CVertexBuffer.h"

CVertexBuffer::CVertexBuffer(const CMaterial& mat): m_mat(mat) {}

CVertexBuffer::~CVertexBuffer() {}

void CVertexBuffer::add(const SVertex& a, const SVertex& b, const SVertex& c)
{
	m_vb.push_back(a);
	m_vb.push_back(b);
	m_vb.push_back(c);
}

#endif
