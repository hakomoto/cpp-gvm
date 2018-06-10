#pragma once
void CTrevalState::ResizeAllocator(unsigned int size)
{
	m_injector.Resize(size);
}

void CTrevalState::FreeAllocator()
{
	m_injector.~CMemInjector();
}
