#source: relax-max-align-call.s
#as: -march=rv64gc
#ld: -Trelax-max-align-call.ld
#objdump: -d

.*:[ 	]+file format .*


Disassembly of section .text1:

0000000000100000 <_start>:
[ 	]+100000:[ 	]+79dff0ef[ 	]+jal[ 	]+1fff9c <foo>
[ 	]+100004:[ 	]+a001[ 	]+j[ 	]+100004 <_start\+0x4>

Disassembly of section .text2:

00000000001fff9c <foo>:
[ 	]+1fff9c:[ 	]+8082[ 	]+ret
