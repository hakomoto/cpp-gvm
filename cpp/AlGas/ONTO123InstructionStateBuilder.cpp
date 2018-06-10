/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#pragma warning(disable:4786)
#include "ONTO123InstructionStateBuilder.h"
#include "ONTO123InstructionState.h"

CONTO123InstructionStateBuilder::CONTO123InstructionStateBuilder(const CONTOx1UserConfig &config) :
	m_config(config)
{
}

CInstructionState *CONTO123InstructionStateBuilder::BuildState(CInstruction *instr, unsigned int instrWord, unsigned int virtualPc, unsigned int physicalPc)
{
	return new CONTO123InstructionState(m_config, instr, instrWord, virtualPc, physicalPc);
}

CInstructionState *CONTO123InstructionStateBuilder::BuildState(CInstructionState &state)
{
	return new CONTO123InstructionState((CONTO123InstructionState &)state);
}

