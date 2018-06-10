/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#include "ONTO123Instructions.h"
#include "../ONTOPROC/Fetch.h"
#include "../ONTOPROC/ONTOx1Branch.h"
#include "../ONTOPROC/ONTOx1Read.h"
#include "../ONTOPROC/ALUExecute1.h"
#include "../ONTOPROC/ALUExecute2.h"
#include "../ONTOPROC/ALUWriteBack.h"
#include "../ONTOPROC/ONTOx1RegisterFile.h"
#include "../ONTOPROC/ONTOx1BranchRegisterFile.h"
#include "../ONTOPROC/Profiler.h"
#include "../ONTOPROC/IssStage.h"

#define STATE ((CONTO123InstructionState *)state)

// =============================================================
// CONTO123_do_nothing_dic1
//
// do_nothing
//
// =============================================================

CONTO123_Instr_do_nothing_dic1::CONTO123_Instr_do_nothing_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_do_nothing_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "do_nothing $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("do_nothing %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_do_nothing_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "do_nothing $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_do_nothing_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_do_nothing_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_do_nothing_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_ld_koeff_ext_dic2
//
// ld_koeff_ext
//
// =============================================================

CONTO123_Instr_ld_koeff_ext_dic2::CONTO123_Instr_ld_koeff_ext_dic2(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 29);
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 29);
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
stage.Set_R(10, STATE->Get_a()); 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_ld_koeff_ext_dic2::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "ld_koeff_ext $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("ld_koeff_ext %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_ld_koeff_ext_dic2::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "ld_koeff_ext $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_ld_koeff_ext_dic2::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_ld_koeff_ext_dic2::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_ld_koeff_ext_dic2::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_do_final_dic1
//
// do_final
//
// =============================================================

CONTO123_Instr_do_final_dic1::CONTO123_Instr_do_final_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_do_final_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_do_final_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_do_final_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_do_final_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_do_final_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
dm_do ("00000000000000000000000000000000", "00000000000000000000000000000000", 0, 0, state, stage, stage.Get_R(10), 1); 
stage.Set_R(16, 1); 
stage.Set_R(17, 0); 
stage.Set_R(18, 0); 
stage.Set_R(19, 0); 
stage.Set_R(20, 0); 
stage.Set_R(21, 0); 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_do_final_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "do_final $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_do_final_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("do_final %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_do_final_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "do_final $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_do_final_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_do_final_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_do_final_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_do_final_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_do_final_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_do_final_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_do_final_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_do_final_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_zik_dic1
//
// zik
//
// =============================================================

CONTO123_Instr_zik_dic1::CONTO123_Instr_zik_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_zik_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_zik_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_zik_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_zik_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_zik_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_zik_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "zik $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_zik_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("zik %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_zik_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "zik $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_zik_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_zik_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_zik_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_zik_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_zik_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_zik_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_zik_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_zik_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_iksf_moscow_dic1
//
// iksf_moscow
//
// =============================================================

CONTO123_Instr_iksf_moscow_dic1::CONTO123_Instr_iksf_moscow_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_iksf_moscow_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "iksf_moscow $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("iksf_moscow %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_iksf_moscow_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "iksf_moscow $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_iksf_moscow_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_iksf_moscow_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_iksf_moscow_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tik_mitino_dic1
//
// tik_mitino
//
// =============================================================

CONTO123_Instr_tik_mitino_dic1::CONTO123_Instr_tik_mitino_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tik_mitino_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tik_mitino $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tik_mitino %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tik_mitino_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tik_mitino $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tik_mitino_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tik_mitino_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tik_mitino_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_uik_2914_dic1
//
// uik_2914
//
// =============================================================

CONTO123_Instr_uik_2914_dic1::CONTO123_Instr_uik_2914_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_uik_2914_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "uik_2914 $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("uik_2914 %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_uik_2914_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "uik_2914 $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2914_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2914_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_uik_2914_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_uik_2915_dic1
//
// uik_2915
//
// =============================================================

CONTO123_Instr_uik_2915_dic1::CONTO123_Instr_uik_2915_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_uik_2915_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "uik_2915 $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("uik_2915 %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_uik_2915_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "uik_2915 $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2915_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2915_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_uik_2915_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_uik_2916_dic1
//
// uik_2916
//
// =============================================================

CONTO123_Instr_uik_2916_dic1::CONTO123_Instr_uik_2916_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_uik_2916_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "uik_2916 $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("uik_2916 %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_uik_2916_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "uik_2916 $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2916_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2916_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_uik_2916_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_uik_2917_dic1
//
// uik_2917
//
// =============================================================

CONTO123_Instr_uik_2917_dic1::CONTO123_Instr_uik_2917_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_uik_2917_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "uik_2917 $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("uik_2917 %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_uik_2917_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "uik_2917 $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2917_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2917_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_uik_2917_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_uik_2918_dic1
//
// uik_2918
//
// =============================================================

CONTO123_Instr_uik_2918_dic1::CONTO123_Instr_uik_2918_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_uik_2918_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "uik_2918 $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("uik_2918 %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_uik_2918_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "uik_2918 $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2918_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_uik_2918_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_uik_2918_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_init_dic1
//
// tr_init
//
// =============================================================

CONTO123_Instr_tr_init_dic1::CONTO123_Instr_tr_init_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Sign-off the current TR - "init" 
if (stage.Get_R(10) == 0) 
{ 
	dm_do ("10000010000100001000010000010000", "10000010000100001000010000010000", 0, 1, state, stage, 1, 0); 
// ****************************** 
// Add the next TR - "register" 
	dm_do ("10000010000100001000010000100000", "10000010000100001000010000100000", 0, 1, state, stage, 0, 0); 
} 
else 
{ 
// Sign-off the current TR - "init" 
	dm_do ("10000010000100001000010000010000", "10000010000100001000010000010000", 0, 1, state, stage, 1, 0); 
} 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_init_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_init $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_init %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_init_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_init $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_init_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_init_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_init_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_registration_dic1
//
// tr_registration
//
// =============================================================

CONTO123_Instr_tr_registration_dic1::CONTO123_Instr_tr_registration_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Sign-off the current TR - "registration" 
if (stage.Get_R(10) == 0) 
{ 
	dm_do ("10000010000100001000010000100000", "10000010000100001000010000100000", 0, 1, state, stage, 1, 0); 
// ****************************** 
// Add the next TR - "vote" 
	dm_do ("10000010000100001000010000110000", "10000010000100001000010000110000", 0, 1, state, stage, 0, 0); 
} 
else 
{ 
// Sign-off the current TR - "registration" 
	dm_do ("10000010000100001000010000100000", "10000010000100001000010000100000", 0, 1, state, stage, 1, 0); 
} 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_registration_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_registration $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_registration %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_registration_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_registration $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_registration_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_registration_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_registration_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_dic1
//
// tr_vote
//
// =============================================================

CONTO123_Instr_tr_vote_dic1::CONTO123_Instr_tr_vote_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Sign-off the current TR - "vote" 
if (stage.Get_R(10) == 0) 
{ 
	dm_do ("10000010000100001000010000110000", "10000010000100001000010000110000", 0, 1, state, stage, 1, 0); 
// ****************************** 
// Add the next TR - "vote_for_mironov" 
	dm_do ("10000010000100001000010000111000", "10000010000100001000010000111000", 0, 1, state, stage, 1, 0); 
// ****************************** 
// Add the next TR - "stamp" 
	dm_do ("10000010000100001000010001000000", "10000010000100001000010001000000", 0, 1, state, stage, 0, 0); 
} 
else 
{ 
// Sign-off the current TR - "vote" 
	dm_do ("10000010000100001000010000110000", "10000010000100001000010000110000", 0, 1, state, stage, 1, 0); 
// ****************************** 
// Add the next TR - "vote_for_mironov" 
	dm_do ("10000010000100001000010000111000", "10000010000100001000010000111000", 0, 1, state, stage, 1, 0); 
} 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_stamp_dic1
//
// tr_stamp
//
// =============================================================

CONTO123_Instr_tr_stamp_dic1::CONTO123_Instr_tr_stamp_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Sign-off the current TR - "stamp" 
if (stage.Get_R(10) == 0) 
{ 
	dm_do ("10000010000100001000010001000000", "10000010000100001000010001000000", 0, 1, state, stage, 1, 0); 
// ****************************** 
// Add the next TR - "write blockchain" 
	dm_do ("10000010000100001000010001010000", "10000010000100001000010001010000", 0, 1, state, stage, 0, 0); 
} 
else 
{ 
// Sign-off the current TR - "stamp" 
	dm_do ("10000010000100001000010001000000", "10000010000100001000010001000000", 0, 1, state, stage, 1, 0); 
} 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_stamp_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_stamp $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_stamp %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_stamp_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_stamp $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_stamp_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_stamp_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_stamp_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_write_blockchain_dic1
//
// tr_write_blockchain
//
// =============================================================

CONTO123_Instr_tr_write_blockchain_dic1::CONTO123_Instr_tr_write_blockchain_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Sign-off the current TR - "write blockchain" 
if (stage.Get_R(10) == 0) 
{ 
	dm_do ("10000010000100001000010001010000", "10000010000100001000010001010000", 0, 1, state, stage, 1, 0); 
} 
else 
{ 
// Sign-off the current TR - "write blockchain" 
	dm_do ("10000010000100001000010001010000", "10000010000100001000010001010000", 0, 1, state, stage, 1, 0); 
} 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_write_blockchain_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_write_blockchain $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_write_blockchain %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_write_blockchain_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_write_blockchain $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_write_blockchain_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_write_blockchain_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_write_blockchain_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_putin_dic1
//
// tr_vote_for_putin
//
// =============================================================

CONTO123_Instr_tr_vote_for_putin_dic1::CONTO123_Instr_tr_vote_for_putin_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_putin_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_putin $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_putin %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_putin_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_putin $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_putin_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_putin_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_putin_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_navalny_dic1
//
// tr_vote_for_navalny
//
// =============================================================

CONTO123_Instr_tr_vote_for_navalny_dic1::CONTO123_Instr_tr_vote_for_navalny_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_navalny_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_navalny $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_navalny %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_navalny_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_navalny $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_navalny_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_navalny_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_navalny_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_zhirinovsky_dic1
//
// tr_vote_for_zhirinovsky
//
// =============================================================

CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::CONTO123_Instr_tr_vote_for_zhirinovsky_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_zhirinovsky $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_zhirinovsky %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_zhirinovsky $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zhirinovsky_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_mironov_dic1
//
// tr_vote_for_mironov
//
// =============================================================

CONTO123_Instr_tr_vote_for_mironov_dic1::CONTO123_Instr_tr_vote_for_mironov_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Sign-off the current TR - "vote_for_mironov" 
if (stage.Get_R(10) == 0) 
{ 
	dm_do ("10000010000100001000010000111000", "10000010000100001000010000111000", 0, 1, state, stage, 1, 0); 
} 
else 
{ 
// Sign-off the current TR - "vote_for_mironov" 
	dm_do ("10000010000100001000010000111000", "10000010000100001000010000111000", 0, 1, state, stage, 1, 0); 
} 
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_mironov_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_mironov $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_mironov %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_mironov_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_mironov $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_mironov_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_mironov_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_mironov_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_zuganov_dic1
//
// tr_vote_for_zuganov
//
// =============================================================

CONTO123_Instr_tr_vote_for_zuganov_dic1::CONTO123_Instr_tr_vote_for_zuganov_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_zuganov_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_zuganov $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_zuganov %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_zuganov_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_zuganov $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_zuganov_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_zuganov_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_zuganov_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_prohorov_dic1
//
// tr_vote_for_prohorov
//
// =============================================================

CONTO123_Instr_tr_vote_for_prohorov_dic1::CONTO123_Instr_tr_vote_for_prohorov_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_prohorov_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_prohorov $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_prohorov %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_prohorov_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_prohorov $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_prohorov_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_prohorov_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_prohorov_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_tr_vote_for_roizman_dic1
//
// tr_vote_for_roizman
//
// =============================================================

CONTO123_Instr_tr_vote_for_roizman_dic1::CONTO123_Instr_tr_vote_for_roizman_dic1(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, false, false, false, 1, 0, 0, 0, 0, 0, 2, 0, false, false)
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::FindOperands(CInstructionState *state) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::DoFetchRead(CInstructionState *state, CFetch &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::Fetch(CInstructionState *state, CFetch &stage) const
{
// Operand decode
STATE->Set_a(0, 0);
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::Read(CInstructionState *state, CONTOx1Read &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::Ex1(CInstructionState *state, CALUExecute1 &stage) const
{
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
string CONTO123_Instr_tr_vote_for_roizman_dic1::TraceLog(CInstructionState *state) const
{
string output("");
char	out[512];
sprintf(out, "tr_vote_for_roizman $r%u %x = $r%u %x" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1(), (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_result1());
output += out;
return output;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::TracePlugin(CInstructionState *state) const
{
state->SetSyntax("tr_vote_for_roizman %1 = %1");
state->SetOperandType(1, 'R');
state->SetOperand(1, (unsigned int)STATE->Get_a());
state->SetOperandValue(1, (unsigned int)STATE->Get_result1());
state->SetOperandValid(1, true);
}

// =============================================================
string CONTO123_Instr_tr_vote_for_roizman_dic1::Disassemble(CInstructionState *state) const
{
string output("");
char out[512];
sprintf(out, "tr_vote_for_roizman $r0.%u = $r0.%u" , (unsigned int)STATE->Get_a(), (unsigned int)STATE->Get_a());
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_roizman_dic1::SetHCGenRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
unsigned int CONTO123_Instr_tr_vote_for_roizman_dic1::SetHCBranchRegBusyBits(CInstructionState *state, CReadUnit &unit) const
{
return NO_DESTINATION;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::ISSPreCommit(CInstructionState *state, CIssStage &stage) const
{
// Read Explicit State
//STATE->Set_result1(SignExtend(stage.Get_R(STATE->Get_a()), 32));
// Code from Caissa Description
STATE->Get_result1() = STATE->Get_result1() ;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::DoISSPostCommit(CInstructionState *state, CIssStage &stage) const
{
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::GetGenRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::GetBrRegDests(CInstructionState *state, unsigned int *dests, unsigned int *numRegs)
{
// No dests
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::GetGenRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
srcs[0] = STATE->Get_a();
numRegs[0] = 1;
}

// =============================================================
void CONTO123_Instr_tr_vote_for_roizman_dic1::GetBrRegSrcs(CInstructionState *state, unsigned int *srcs, unsigned int *numRegs)
{
// No sources
}

// =============================================================
// CONTO123_illegal
//
// CInstr_illegal
//
// =============================================================


CONTO123_Instr_illegal::CONTO123_Instr_illegal(const string &mnemonic, unsigned int instrSet) :
    CInstruction(mnemonic, instrSet, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0, false, false)
{
}

void CONTO123_Instr_illegal::DoEx2(CInstructionState *state, CALUExecute2 &stage) const
{
Chess_Throw(state->Get_ILL_INST());
}

string CONTO123_Instr_illegal::Disassemble(CInstructionState *state) const
{
string output;
char	out[512];
sprintf(out, "illegal instruction");
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

string CONTO123_Instr_illegal::TraceLog(CInstructionState *state) const
{
string output;
char	out[512];
sprintf(out, "illegal instruction");
output += out;
if (state->InstructionWord() & 0x80000000)
output += ";;";
return output;
}

void CONTO123_Instr_illegal::TracePlugin(CInstructionState *state) const
{
}

