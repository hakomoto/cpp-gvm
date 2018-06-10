/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#ifndef _ONTO123InstructionStateBuilder_H_
#define _ONTO123InstructionStateBuilder_H_

#include "../ONTOPROC/InstructionStateBuilder.h"

class  CInstructionState;

class CONTO123InstructionStateBuilder : public CInstructionStateBuilder
{
public:
	CONTO123InstructionStateBuilder(const CONTOx1UserConfig &config);
	CInstructionState	*BuildState(CInstruction *instr, unsigned int instrWord, unsigned int virtualPc, unsigned int physicalPc);
	CInstructionState	*BuildState(CInstructionState &state);
private:
	const	CONTOx1UserConfig &m_config;
};

#endif // _ONTO123InstructionStateBuilder_H_

