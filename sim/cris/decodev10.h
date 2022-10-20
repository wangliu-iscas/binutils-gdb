/* Decode header for crisv10f.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2022 Free Software Foundation, Inc.

This file is part of the GNU simulators.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef CRISV10F_DECODE_H
#define CRISV10F_DECODE_H

extern const IDESC *crisv10f_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD,
                                  ARGBUF *);
extern void crisv10f_init_idesc_table (SIM_CPU *);
extern void crisv10f_sem_init_idesc_table (SIM_CPU *);
extern void crisv10f_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family crisv10f.  */
typedef enum crisv10f_insn_type {
  CRISV10F_INSN_X_INVALID, CRISV10F_INSN_X_AFTER, CRISV10F_INSN_X_BEFORE, CRISV10F_INSN_X_CTI_CHAIN
 , CRISV10F_INSN_X_CHAIN, CRISV10F_INSN_X_BEGIN, CRISV10F_INSN_NOP, CRISV10F_INSN_MOVE_B_R
 , CRISV10F_INSN_MOVE_W_R, CRISV10F_INSN_MOVE_D_R, CRISV10F_INSN_MOVEPCR, CRISV10F_INSN_MOVEQ
 , CRISV10F_INSN_MOVS_B_R, CRISV10F_INSN_MOVS_W_R, CRISV10F_INSN_MOVU_B_R, CRISV10F_INSN_MOVU_W_R
 , CRISV10F_INSN_MOVECBR, CRISV10F_INSN_MOVECWR, CRISV10F_INSN_MOVECDR, CRISV10F_INSN_MOVSCBR
 , CRISV10F_INSN_MOVSCWR, CRISV10F_INSN_MOVUCBR, CRISV10F_INSN_MOVUCWR, CRISV10F_INSN_ADDQ
 , CRISV10F_INSN_SUBQ, CRISV10F_INSN_CMP_R_B_R, CRISV10F_INSN_CMP_R_W_R, CRISV10F_INSN_CMP_R_D_R
 , CRISV10F_INSN_CMP_M_B_M, CRISV10F_INSN_CMP_M_W_M, CRISV10F_INSN_CMP_M_D_M, CRISV10F_INSN_CMPCBR
 , CRISV10F_INSN_CMPCWR, CRISV10F_INSN_CMPCDR, CRISV10F_INSN_CMPQ, CRISV10F_INSN_CMPS_M_B_M
 , CRISV10F_INSN_CMPS_M_W_M, CRISV10F_INSN_CMPSCBR, CRISV10F_INSN_CMPSCWR, CRISV10F_INSN_CMPU_M_B_M
 , CRISV10F_INSN_CMPU_M_W_M, CRISV10F_INSN_CMPUCBR, CRISV10F_INSN_CMPUCWR, CRISV10F_INSN_MOVE_M_B_M
 , CRISV10F_INSN_MOVE_M_W_M, CRISV10F_INSN_MOVE_M_D_M, CRISV10F_INSN_MOVS_M_B_M, CRISV10F_INSN_MOVS_M_W_M
 , CRISV10F_INSN_MOVU_M_B_M, CRISV10F_INSN_MOVU_M_W_M, CRISV10F_INSN_MOVE_R_SPRV10, CRISV10F_INSN_MOVE_SPR_RV10
 , CRISV10F_INSN_RET_TYPE, CRISV10F_INSN_MOVE_M_SPRV10, CRISV10F_INSN_MOVE_C_SPRV10_P5, CRISV10F_INSN_MOVE_C_SPRV10_P9
 , CRISV10F_INSN_MOVE_C_SPRV10_P10, CRISV10F_INSN_MOVE_C_SPRV10_P11, CRISV10F_INSN_MOVE_C_SPRV10_P12, CRISV10F_INSN_MOVE_C_SPRV10_P13
 , CRISV10F_INSN_MOVE_C_SPRV10_P7, CRISV10F_INSN_MOVE_C_SPRV10_P14, CRISV10F_INSN_MOVE_C_SPRV10_P15, CRISV10F_INSN_MOVE_SPR_MV10
 , CRISV10F_INSN_SBFS, CRISV10F_INSN_MOVEM_R_M, CRISV10F_INSN_MOVEM_M_R, CRISV10F_INSN_MOVEM_M_PC
 , CRISV10F_INSN_ADD_B_R, CRISV10F_INSN_ADD_W_R, CRISV10F_INSN_ADD_D_R, CRISV10F_INSN_ADD_M_B_M
 , CRISV10F_INSN_ADD_M_W_M, CRISV10F_INSN_ADD_M_D_M, CRISV10F_INSN_ADDCBR, CRISV10F_INSN_ADDCWR
 , CRISV10F_INSN_ADDCDR, CRISV10F_INSN_ADDCPC, CRISV10F_INSN_ADDS_B_R, CRISV10F_INSN_ADDS_W_R
 , CRISV10F_INSN_ADDS_M_B_M, CRISV10F_INSN_ADDS_M_W_M, CRISV10F_INSN_ADDSCBR, CRISV10F_INSN_ADDSCWR
 , CRISV10F_INSN_ADDSPCPC, CRISV10F_INSN_ADDU_B_R, CRISV10F_INSN_ADDU_W_R, CRISV10F_INSN_ADDU_M_B_M
 , CRISV10F_INSN_ADDU_M_W_M, CRISV10F_INSN_ADDUCBR, CRISV10F_INSN_ADDUCWR, CRISV10F_INSN_SUB_B_R
 , CRISV10F_INSN_SUB_W_R, CRISV10F_INSN_SUB_D_R, CRISV10F_INSN_SUB_M_B_M, CRISV10F_INSN_SUB_M_W_M
 , CRISV10F_INSN_SUB_M_D_M, CRISV10F_INSN_SUBCBR, CRISV10F_INSN_SUBCWR, CRISV10F_INSN_SUBCDR
 , CRISV10F_INSN_SUBS_B_R, CRISV10F_INSN_SUBS_W_R, CRISV10F_INSN_SUBS_M_B_M, CRISV10F_INSN_SUBS_M_W_M
 , CRISV10F_INSN_SUBSCBR, CRISV10F_INSN_SUBSCWR, CRISV10F_INSN_SUBU_B_R, CRISV10F_INSN_SUBU_W_R
 , CRISV10F_INSN_SUBU_M_B_M, CRISV10F_INSN_SUBU_M_W_M, CRISV10F_INSN_SUBUCBR, CRISV10F_INSN_SUBUCWR
 , CRISV10F_INSN_ADDI_B_R, CRISV10F_INSN_ADDI_W_R, CRISV10F_INSN_ADDI_D_R, CRISV10F_INSN_NEG_B_R
 , CRISV10F_INSN_NEG_W_R, CRISV10F_INSN_NEG_D_R, CRISV10F_INSN_TEST_M_B_M, CRISV10F_INSN_TEST_M_W_M
 , CRISV10F_INSN_TEST_M_D_M, CRISV10F_INSN_MOVE_R_M_B_M, CRISV10F_INSN_MOVE_R_M_W_M, CRISV10F_INSN_MOVE_R_M_D_M
 , CRISV10F_INSN_MULS_B, CRISV10F_INSN_MULS_W, CRISV10F_INSN_MULS_D, CRISV10F_INSN_MULU_B
 , CRISV10F_INSN_MULU_W, CRISV10F_INSN_MULU_D, CRISV10F_INSN_MSTEP, CRISV10F_INSN_DSTEP
 , CRISV10F_INSN_ABS, CRISV10F_INSN_AND_B_R, CRISV10F_INSN_AND_W_R, CRISV10F_INSN_AND_D_R
 , CRISV10F_INSN_AND_M_B_M, CRISV10F_INSN_AND_M_W_M, CRISV10F_INSN_AND_M_D_M, CRISV10F_INSN_ANDCBR
 , CRISV10F_INSN_ANDCWR, CRISV10F_INSN_ANDCDR, CRISV10F_INSN_ANDQ, CRISV10F_INSN_ORR_B_R
 , CRISV10F_INSN_ORR_W_R, CRISV10F_INSN_ORR_D_R, CRISV10F_INSN_OR_M_B_M, CRISV10F_INSN_OR_M_W_M
 , CRISV10F_INSN_OR_M_D_M, CRISV10F_INSN_ORCBR, CRISV10F_INSN_ORCWR, CRISV10F_INSN_ORCDR
 , CRISV10F_INSN_ORQ, CRISV10F_INSN_XOR, CRISV10F_INSN_SWAP, CRISV10F_INSN_ASRR_B_R
 , CRISV10F_INSN_ASRR_W_R, CRISV10F_INSN_ASRR_D_R, CRISV10F_INSN_ASRQ, CRISV10F_INSN_LSRR_B_R
 , CRISV10F_INSN_LSRR_W_R, CRISV10F_INSN_LSRR_D_R, CRISV10F_INSN_LSRQ, CRISV10F_INSN_LSLR_B_R
 , CRISV10F_INSN_LSLR_W_R, CRISV10F_INSN_LSLR_D_R, CRISV10F_INSN_LSLQ, CRISV10F_INSN_BTST
 , CRISV10F_INSN_BTSTQ, CRISV10F_INSN_SETF, CRISV10F_INSN_CLEARF, CRISV10F_INSN_BCC_B
 , CRISV10F_INSN_BA_B, CRISV10F_INSN_BCC_W, CRISV10F_INSN_BA_W, CRISV10F_INSN_JUMP_R
 , CRISV10F_INSN_JUMP_M, CRISV10F_INSN_JUMP_C, CRISV10F_INSN_BREAK, CRISV10F_INSN_BOUND_R_B_R
 , CRISV10F_INSN_BOUND_R_W_R, CRISV10F_INSN_BOUND_R_D_R, CRISV10F_INSN_BOUND_M_B_M, CRISV10F_INSN_BOUND_M_W_M
 , CRISV10F_INSN_BOUND_M_D_M, CRISV10F_INSN_BOUND_CB, CRISV10F_INSN_BOUND_CW, CRISV10F_INSN_BOUND_CD
 , CRISV10F_INSN_SCC, CRISV10F_INSN_LZ, CRISV10F_INSN_ADDOQ, CRISV10F_INSN_BDAPQPC
 , CRISV10F_INSN_BDAP_32_PC, CRISV10F_INSN_MOVE_M_PCPLUS_P0, CRISV10F_INSN_MOVE_M_SPPLUS_P8, CRISV10F_INSN_ADDO_M_B_M
 , CRISV10F_INSN_ADDO_M_W_M, CRISV10F_INSN_ADDO_M_D_M, CRISV10F_INSN_ADDO_CB, CRISV10F_INSN_ADDO_CW
 , CRISV10F_INSN_ADDO_CD, CRISV10F_INSN_DIP_M, CRISV10F_INSN_DIP_C, CRISV10F_INSN_ADDI_ACR_B_R
 , CRISV10F_INSN_ADDI_ACR_W_R, CRISV10F_INSN_ADDI_ACR_D_R, CRISV10F_INSN_BIAP_PC_B_R, CRISV10F_INSN_BIAP_PC_W_R
 , CRISV10F_INSN_BIAP_PC_D_R, CRISV10F_INSN__MAX
} CRISV10F_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family crisv10f.  */
typedef enum crisv10f_sfmt_type {
  CRISV10F_SFMT_EMPTY, CRISV10F_SFMT_NOP, CRISV10F_SFMT_MOVE_B_R, CRISV10F_SFMT_MOVE_D_R
 , CRISV10F_SFMT_MOVEPCR, CRISV10F_SFMT_MOVEQ, CRISV10F_SFMT_MOVS_B_R, CRISV10F_SFMT_MOVECBR
 , CRISV10F_SFMT_MOVECWR, CRISV10F_SFMT_MOVECDR, CRISV10F_SFMT_MOVSCBR, CRISV10F_SFMT_MOVSCWR
 , CRISV10F_SFMT_MOVUCBR, CRISV10F_SFMT_MOVUCWR, CRISV10F_SFMT_ADDQ, CRISV10F_SFMT_CMP_R_B_R
 , CRISV10F_SFMT_CMP_M_B_M, CRISV10F_SFMT_CMP_M_W_M, CRISV10F_SFMT_CMP_M_D_M, CRISV10F_SFMT_CMPCBR
 , CRISV10F_SFMT_CMPCWR, CRISV10F_SFMT_CMPCDR, CRISV10F_SFMT_CMPQ, CRISV10F_SFMT_CMPUCBR
 , CRISV10F_SFMT_CMPUCWR, CRISV10F_SFMT_MOVE_M_B_M, CRISV10F_SFMT_MOVE_M_W_M, CRISV10F_SFMT_MOVE_M_D_M
 , CRISV10F_SFMT_MOVS_M_B_M, CRISV10F_SFMT_MOVS_M_W_M, CRISV10F_SFMT_MOVE_R_SPRV10, CRISV10F_SFMT_MOVE_SPR_RV10
 , CRISV10F_SFMT_RET_TYPE, CRISV10F_SFMT_MOVE_M_SPRV10, CRISV10F_SFMT_MOVE_C_SPRV10_P5, CRISV10F_SFMT_MOVE_C_SPRV10_P9
 , CRISV10F_SFMT_MOVE_SPR_MV10, CRISV10F_SFMT_SBFS, CRISV10F_SFMT_MOVEM_R_M, CRISV10F_SFMT_MOVEM_M_R
 , CRISV10F_SFMT_MOVEM_M_PC, CRISV10F_SFMT_ADD_B_R, CRISV10F_SFMT_ADD_D_R, CRISV10F_SFMT_ADD_M_B_M
 , CRISV10F_SFMT_ADD_M_W_M, CRISV10F_SFMT_ADD_M_D_M, CRISV10F_SFMT_ADDCBR, CRISV10F_SFMT_ADDCWR
 , CRISV10F_SFMT_ADDCDR, CRISV10F_SFMT_ADDCPC, CRISV10F_SFMT_ADDS_M_B_M, CRISV10F_SFMT_ADDS_M_W_M
 , CRISV10F_SFMT_ADDSCBR, CRISV10F_SFMT_ADDSCWR, CRISV10F_SFMT_ADDSPCPC, CRISV10F_SFMT_ADDI_B_R
 , CRISV10F_SFMT_NEG_B_R, CRISV10F_SFMT_NEG_D_R, CRISV10F_SFMT_TEST_M_B_M, CRISV10F_SFMT_TEST_M_W_M
 , CRISV10F_SFMT_TEST_M_D_M, CRISV10F_SFMT_MOVE_R_M_B_M, CRISV10F_SFMT_MOVE_R_M_W_M, CRISV10F_SFMT_MOVE_R_M_D_M
 , CRISV10F_SFMT_MULS_B, CRISV10F_SFMT_MSTEP, CRISV10F_SFMT_DSTEP, CRISV10F_SFMT_AND_B_R
 , CRISV10F_SFMT_AND_D_R, CRISV10F_SFMT_AND_M_B_M, CRISV10F_SFMT_AND_M_W_M, CRISV10F_SFMT_AND_M_D_M
 , CRISV10F_SFMT_ANDCBR, CRISV10F_SFMT_ANDCWR, CRISV10F_SFMT_ANDCDR, CRISV10F_SFMT_ANDQ
 , CRISV10F_SFMT_SWAP, CRISV10F_SFMT_ASRQ, CRISV10F_SFMT_LSRR_B_R, CRISV10F_SFMT_LSRR_D_R
 , CRISV10F_SFMT_BTST, CRISV10F_SFMT_BTSTQ, CRISV10F_SFMT_SETF, CRISV10F_SFMT_BCC_B
 , CRISV10F_SFMT_BA_B, CRISV10F_SFMT_BCC_W, CRISV10F_SFMT_BA_W, CRISV10F_SFMT_JUMP_R
 , CRISV10F_SFMT_JUMP_M, CRISV10F_SFMT_JUMP_C, CRISV10F_SFMT_BREAK, CRISV10F_SFMT_BOUND_M_B_M
 , CRISV10F_SFMT_BOUND_M_W_M, CRISV10F_SFMT_BOUND_M_D_M, CRISV10F_SFMT_BOUND_CB, CRISV10F_SFMT_BOUND_CW
 , CRISV10F_SFMT_BOUND_CD, CRISV10F_SFMT_SCC, CRISV10F_SFMT_ADDOQ, CRISV10F_SFMT_BDAPQPC
 , CRISV10F_SFMT_BDAP_32_PC, CRISV10F_SFMT_MOVE_M_PCPLUS_P0, CRISV10F_SFMT_MOVE_M_SPPLUS_P8, CRISV10F_SFMT_ADDO_M_B_M
 , CRISV10F_SFMT_ADDO_M_W_M, CRISV10F_SFMT_ADDO_M_D_M, CRISV10F_SFMT_ADDO_CB, CRISV10F_SFMT_ADDO_CW
 , CRISV10F_SFMT_ADDO_CD, CRISV10F_SFMT_DIP_M, CRISV10F_SFMT_DIP_C, CRISV10F_SFMT_ADDI_ACR_B_R
 , CRISV10F_SFMT_BIAP_PC_B_R
} CRISV10F_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int crisv10f_model_crisv10_u_movem (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*Rd*/);
extern int crisv10f_model_crisv10_u_multiply (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int crisv10f_model_crisv10_u_skip4 (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int crisv10f_model_crisv10_u_stall (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int crisv10f_model_crisv10_u_const32 (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int crisv10f_model_crisv10_u_const16 (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int crisv10f_model_crisv10_u_mem (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int crisv10f_model_crisv10_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void crisv10f_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void crisv10f_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* CRISV10F_DECODE_H */
