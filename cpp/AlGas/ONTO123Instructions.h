/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#ifndef _ONTO123Instructions_H_
#define _ONTO123Instructions_H_

#include "../ONTOPROC/Instructions.h"
#include "ONTO123InstructionState.h"

class CONTO123_Instr_do_nothing_dic1 : public CInstruction
{
public:
    CONTO123_Instr_do_nothing_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_ld_koeff_ext_dic2 : public CInstruction
{
public:
    CONTO123_Instr_ld_koeff_ext_dic2(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_do_final_dic1 : public CInstruction
{
public:
    CONTO123_Instr_do_final_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_zik_dic1 : public CInstruction
{
public:
    CONTO123_Instr_zik_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_iksf_moscow_dic1 : public CInstruction
{
public:
    CONTO123_Instr_iksf_moscow_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tik_mitino_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tik_mitino_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_uik_2914_dic1 : public CInstruction
{
public:
    CONTO123_Instr_uik_2914_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_uik_2915_dic1 : public CInstruction
{
public:
    CONTO123_Instr_uik_2915_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_uik_2916_dic1 : public CInstruction
{
public:
    CONTO123_Instr_uik_2916_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_uik_2917_dic1 : public CInstruction
{
public:
    CONTO123_Instr_uik_2917_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_uik_2918_dic1 : public CInstruction
{
public:
    CONTO123_Instr_uik_2918_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_init_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_init_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_registration_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_registration_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_stamp_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_stamp_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_write_blockchain_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_write_blockchain_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_putin_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_putin_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_navalny_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_navalny_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_zhirinovsky_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_zhirinovsky_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_mironov_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_mironov_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_zuganov_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_zuganov_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_prohorov_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_prohorov_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_tr_vote_for_roizman_dic1 : public CInstruction
{
public:
    CONTO123_Instr_tr_vote_for_roizman_dic1(const string &mnemonic, unsigned int instrSet);
	virtual void FindOperands(CInstructionState *state) const;
	virtual void DoFetchRead(CInstructionState *state, CFetch &stage) const;
	virtual void Fetch(CInstructionState *state, CFetch &stage) const;
	virtual void Read(CInstructionState *state, CONTOx1Read &stage) const;
	virtual void Ex1(CInstructionState *state, CALUExecute1 &stage) const;
	virtual string TraceLog(CInstructionState *state) const;
	virtual void TracePlugin(CInstructionState *state) const;
	virtual string Disassemble(CInstructionState *state) const;
	virtual unsigned int SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual unsigned int SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const;
	virtual void ISSPreCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void DoISSPostCommit(CInstructionState *state, CIssStage &stage) const;
	virtual void GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs);
	virtual void GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
	virtual void GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs);
};

class CONTO123_Instr_illegal : public CInstruction
{
public:
    CONTO123_Instr_illegal(const string &mnemonic, unsigned int instrSet);
    // We log the exception in Ex2 to be actioned in WriteBack
    virtual void DoEx2(CInstructionState *state, CALUExecute2 &stage) const;
    virtual string Disassemble(CInstructionState *state) const;
    virtual string TraceLog(CInstructionState *state) const;
    virtual void TracePlugin(CInstructionState *state) const;
};

#endif // _ONTO123Instructions_H_

