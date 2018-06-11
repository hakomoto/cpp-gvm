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

#ifndef MEMINJECT_H
#define MEMINJECT_H

#pragma warning(disable:4786)

#include <math.h>
#include <vector>

using namespace std;

template <class T>
class CMemInjector
{
public:
	CMemInjector(unsigned int size);
	~CMemInjector();

	T		*New(unsigned int);
	void	Delete(T *);

	void	Resize(unsigned int newSize);

private:
	void Grow();

private:
	T				**m_freeList;
	vector<T *>		m_pools;

	unsigned int	m_size;			
	unsigned int	m_sizeMask;
	unsigned int	m_head;			
	unsigned int	m_tail;			
};

template <class T>
inline
CMemInjector<T>::CMemInjector(unsigned int size) :
	m_head(0),
	m_tail(0)
{
	unsigned int	log2size = (unsigned int)ceil(log10(size) / log10(2));

	m_size = 1 << log2size;
	m_sizeMask = m_size - 1;

	m_freeList = (T**)malloc(sizeof(T *) * m_size);

	T	*pool = (T *)malloc(sizeof(T) * m_size);

	for (unsigned int i = 0; i < m_size; i++)
		m_freeList[i] = &pool[i];

	m_pools.push_back(pool);
}

template <class T>
inline
CMemInjector<T>::~CMemInjector()
{
	free(m_freeList);

	for (unsigned int i = 0; i < m_pools.size(); i++)
		free(m_pools[i]);
}

template <class T>
inline
void CMemInjector<T>::Grow()
{
	unsigned int oldSize = m_size;

	m_size = m_size * 2;
	m_sizeMask = m_size - 1;
	m_freeList = (T**)realloc(m_freeList, sizeof(T *) * m_size);

	T	*pool = (T *)malloc(sizeof(T) * oldSize);

	unsigned int i, j;

	for (i = oldSize, j = 0; i < m_size; i++, j++)
		m_freeList[i] = &pool[j];

	m_pools.push_back(pool);

	m_tail = 0;
	m_head = oldSize;
}

template <class T>
inline
T *CMemInjector<T>::New(unsigned int)
{
	T	*ptr = m_freeList[m_head];
	m_freeList[m_head] = NULL;
	m_head = (m_head + 1) & m_sizeMask;

	if (m_head != m_tail)
		return ptr;
	else
		Grow();

	return ptr;
}

template <class T>
inline
void CMemInjector<T>::Resize(unsigned int newSize)
{
	if (newSize <= m_size)
		return;

	unsigned int oldSize = m_size;
	unsigned int log2size = (unsigned int)ceil(log10(newSize) / log10(2));

	m_size = 1 << log2size;
	m_sizeMask = m_size - 1;
	m_freeList = (T**)realloc(m_freeList, sizeof(T *) * m_size);

	T	*pool = (T *)malloc(sizeof(T) * (m_size - oldSize));

	unsigned int i, j;

	for (i = oldSize, j = 0; i < m_size; i++, j++)
		m_freeList[i] = &pool[j];

	m_pools.push_back(pool);
}

template <class T>
inline
void CMemInjector<T>::Delete(T *ptr)
{
	if (ptr != NULL)
	{
		m_freeList[m_tail] = ptr;
		m_tail = (m_tail + 1) & m_sizeMask;
	}
}

#endif	// MEMINJECT_H
