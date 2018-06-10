/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#ifndef _ONTO123InstructionState_H_
#define _ONTO123InstructionState_H_

#include "../ONTOPROC/InstructionState.h"
#include "../ONTOPROC/Instructions.h"
#include "../Common/machdep.h"
#include "../Common/Alloc.h"

class CONTO123InstructionState : public CInstructionState
{
public:
	CONTO123InstructionState(const CONTOx1UserConfig &config, CInstruction *instr, unsigned int instrWord, unsigned int virtualPc, unsigned int physicalPc) :
		CInstructionState(config, instr, instrWord, virtualPc, physicalPc, 0x0, 0x0, 0x0, 0x0),
		m_result1(0),
		m_a(0)
	{
		// Do nothing.
	}

	~CONTO123InstructionState()
	{
		// Do nothing.
	}

	unsigned __int64 &Get_result1() {return m_result1;}
	void Set_result1(unsigned __int64 val) {m_result1 = val;}
	unsigned __int64 &Get_a() {return m_a;}
	void Set_a(unsigned int first, unsigned int last)
	{
		unsigned int fieldWidth = last - first + 1;
		unsigned int mask		= (1 << fieldWidth) - 1;
		m_a = (m_instructionWord >> first) & mask;
	}

	// immediate methods.
	unsigned int Get_IMM(unsigned int i)
	{
		if (m_usesExImm)
			return ((i & 0x1FF) | (m_immediate << 9));
		return SignExtend(i, 9);
	}
	void SetImmediateHigh(unsigned int immediate)
	{
		m_immediate = immediate;
		m_usesExImm = true;
	}

	// allocator methods.
	static void *operator new(size_t size)
	{
		return m_allocator.New(size);
	}
	static void operator delete(void *state)
	{
		m_allocator.Delete((CONTO123InstructionState*)state);
	}
	static void ResizeAllocator(unsigned int newSize)
	{
		m_allocator.Resize(newSize);
	}

	void ResetVars()
	{
		m_result1 = 0;
		m_a = 0;
	}

private:
	unsigned __int64 m_result1;
	unsigned __int64 m_a;

	static CAllocator<CONTO123InstructionState>	m_allocator;
};

#endif // _ONTO123InstructionState_H_

