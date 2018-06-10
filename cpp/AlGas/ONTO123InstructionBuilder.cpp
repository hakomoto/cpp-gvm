/************************************************
 * Copyright KALITA Pte. Ltd. 2015, 2016, 2017, 2018
 * All rights reserved.
 *
 * KALITA Pte. Ltd. Confidential
 ************************************************/
// FILE AUTOMATICALLY GENERATED -- DO NOT EDIT

#include "ONTO123InstructionBuilder.h"
#include "ONTO123Instructions.h"

static CONTO123_Instr_do_nothing_dic1 s_do_nothing_dic1("_do_nothing_dic1", 123);
static CONTO123_Instr_ld_koeff_ext_dic2 s_ld_koeff_ext_dic2("_ld_koeff_ext_dic2", 123);
static CONTO123_Instr_do_final_dic1 s_do_final_dic1("_do_final_dic1", 123);
static CONTO123_Instr_zik_dic1 s_zik_dic1("_zik_dic1", 123);
static CONTO123_Instr_iksf_moscow_dic1 s_iksf_moscow_dic1("_iksf_moscow_dic1", 123);
static CONTO123_Instr_tik_mitino_dic1 s_tik_mitino_dic1("_tik_mitino_dic1", 123);
static CONTO123_Instr_uik_2914_dic1 s_uik_2914_dic1("_uik_2914_dic1", 123);
static CONTO123_Instr_uik_2915_dic1 s_uik_2915_dic1("_uik_2915_dic1", 123);
static CONTO123_Instr_uik_2916_dic1 s_uik_2916_dic1("_uik_2916_dic1", 123);
static CONTO123_Instr_uik_2917_dic1 s_uik_2917_dic1("_uik_2917_dic1", 123);
static CONTO123_Instr_uik_2918_dic1 s_uik_2918_dic1("_uik_2918_dic1", 123);
static CONTO123_Instr_tr_init_dic1 s_tr_init_dic1("_tr_init_dic1", 123);
static CONTO123_Instr_tr_registration_dic1 s_tr_registration_dic1("_tr_registration_dic1", 123);
static CONTO123_Instr_tr_vote_dic1 s_tr_vote_dic1("_tr_vote_dic1", 123);
static CONTO123_Instr_tr_stamp_dic1 s_tr_stamp_dic1("_tr_stamp_dic1", 123);
static CONTO123_Instr_tr_write_blockchain_dic1 s_tr_write_blockchain_dic1("_tr_write_blockchain_dic1", 123);
static CONTO123_Instr_tr_vote_for_putin_dic1 s_tr_vote_for_putin_dic1("_tr_vote_for_putin_dic1", 123);
static CONTO123_Instr_tr_vote_for_navalny_dic1 s_tr_vote_for_navalny_dic1("_tr_vote_for_navalny_dic1", 123);
static CONTO123_Instr_tr_vote_for_zhirinovsky_dic1 s_tr_vote_for_zhirinovsky_dic1("_tr_vote_for_zhirinovsky_dic1", 123);
static CONTO123_Instr_tr_vote_for_mironov_dic1 s_tr_vote_for_mironov_dic1("_tr_vote_for_mironov_dic1", 123);
static CONTO123_Instr_tr_vote_for_zuganov_dic1 s_tr_vote_for_zuganov_dic1("_tr_vote_for_zuganov_dic1", 123);
static CONTO123_Instr_tr_vote_for_prohorov_dic1 s_tr_vote_for_prohorov_dic1("_tr_vote_for_prohorov_dic1", 123);
static CONTO123_Instr_tr_vote_for_roizman_dic1 s_tr_vote_for_roizman_dic1("_tr_vote_for_roizman_dic1", 123);
static CONTO123_Instr_illegal	s_illegal("_illegal", 123);

CInstruction *CONTO123InstructionBuilder::DecodeWord(unsigned int o)
{
    switch ((o >> 30) & ((1 << 1) - 1))
    {
        case 0:
        switch ((o >> 1) & ((1 << 29) - 1))
        {
            case 1572864:
                return &s_do_nothing_dic1;
            case 1048576:
                return &s_do_final_dic1;
            case 16777216:
                return &s_zik_dic1;
            case 17301504:
                return &s_iksf_moscow_dic1;
            case 17317888:
                return &s_tik_mitino_dic1;
            case 17318400:
                return &s_uik_2914_dic1;
            case 17318912:
                return &s_uik_2915_dic1;
            case 17319424:
                return &s_uik_2916_dic1;
            case 17319936:
                return &s_uik_2917_dic1;
            case 17320448:
                return &s_uik_2918_dic1;
            case 17318408:
                return &s_tr_init_dic1;
            case 17318416:
                return &s_tr_registration_dic1;
            case 17318424:
                return &s_tr_vote_dic1;
            case 17318432:
                return &s_tr_stamp_dic1;
            case 17318440:
                return &s_tr_write_blockchain_dic1;
            case 17318425:
                return &s_tr_vote_for_putin_dic1;
            case 17318426:
                return &s_tr_vote_for_navalny_dic1;
            case 17318427:
                return &s_tr_vote_for_zhirinovsky_dic1;
            case 17318428:
                return &s_tr_vote_for_mironov_dic1;
            case 17318429:
                return &s_tr_vote_for_zuganov_dic1;
            case 17318430:
                return &s_tr_vote_for_prohorov_dic1;
            case 17318431:
                return &s_tr_vote_for_roizman_dic1;
            default:
                return &s_illegal;
        }
        case 1:
            return &s_ld_koeff_ext_dic2;
        default:
            return &s_illegal;
    }
}

CInstruction *CONTO123InstructionBuilder::Illegal()
{
	return &s_illegal;
}

