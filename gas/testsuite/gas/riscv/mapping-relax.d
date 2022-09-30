#name:
#source: mapping-relax.s
#as:
#readelf: -rW

Relocation section '.rela.text' at .*
[ ]+Offset[ ]+Info[ ]+Type[ ]+.*
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_HI20[ 	]+[0-9a-f]+[ 	]+foo \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+[0-9a-f]+[ 	]+\$xrv32i2p1 \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_LO12_I[ 	]+[0-9a-f]+[ 	]+foo \+ 4
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+[0-9a-f]+[ 	]+\$xrv32i2p1 \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_TPREL_HI20[ 	]+[0-9a-f]+[ 	]+i \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_TPREL_ADD[ 	]+[0-9a-f]+[ 	]+i \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_TPREL_LO12_I[ 	]+[0-9a-f]+[ 	]+i \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_PCREL_HI20[ 	]+[0-9a-f]+[ 	]+foo \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_PCREL_LO12_I[ 	]+[0-9a-f]+[ 	]+L1 \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_CALL_PLT[ 	]+[0-9a-f]+[ 	]+foo \+ 0
[0-9a-f]+[ 	]+[0-9a-f]+[ 	]+R_RISCV_RELAX[ 	]+[0-9a-f]+[ 	]+\$xrv32i2p1_c2p0 \+ 0
