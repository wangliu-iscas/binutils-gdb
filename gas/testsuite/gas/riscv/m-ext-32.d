#as: -march=rv32im
#source: m-ext.s
#objdump: -d

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+[0-9a-f]+:[ 	]+02c58533[ 	]+mul[  	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c59533[ 	]+mulh[ 	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c5a533[ 	]+mulhsu[ 	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c5b533[ 	]+mulhu[ 	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c5c533[ 	]+div[  	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c5d533[ 	]+divu[ 	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c5e533[ 	]+rem[  	]+a0,a1,a2
[ 	]+[0-9a-f]+:[ 	]+02c5f533[ 	]+remu[ 	]+a0,a1,a2
