#as: -march=rv32i_xsfcdiscarddlone_xsfcflushdlone_xsfcflushilone
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+0:[ 	]+fc050073[ 	]+sf.cflush.d.l1[ 	]+a0
[ 	]+4:[ 	]+fc250073[ 	]+sf.cdiscard.d.l1[ 	]+a0
[ 	]+8:[ 	]+fc100073[ 	]+sf.cflush.i.l1
