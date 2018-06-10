/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#ifndef _ONTO123InstructionBuilder_H_
#define _ONTO123InstructionBuilder_H_

#include "../ONTOPROC/InstructionBuilder.h"

class  CInstruction;

class CONTO123InstructionBuilder : public CInstructionBuilder
{
public:
	CInstruction *DecodeWord(unsigned int o);
	CInstruction *Illegal();
};

#endif // _ONTO123InstructionBuilder_H_

