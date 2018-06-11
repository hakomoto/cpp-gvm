#pragma once
/*
This file is part of cpp-gvm.

cpp-gvm is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

cpp-gvm is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with cpp-gvm.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file MemInject.h
* @author Hakomoto <antosha.hakomoto@gmail.com>
* @date 2018
*/

void CTrevalState::ResizeAllocator(unsigned int size)
{
	m_injector.Resize(size);
}

void CTrevalState::FreeAllocator()
{
	m_injector.~CMemInjector();
}
