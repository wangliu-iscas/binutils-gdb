#source: c-relax.s
#ld: --relax
#objdump: -d -Mno-aliases

.*:[ 	]+file format .*


Disassembly of section .text:

0+[0-9a-f]+ <_start>:
.*:[ 	]+[0-9a-f]+[ 	]+lui[ 	]+.*
.*:[ 	]+[0-9a-f]+[ 	]+addi[ 	]+.*
.*:[ 	]+[0-9a-f]+[ 	]+c\.lui[ 	]+.*
.*:[ 	]+[0-9a-f]+[ 	]+addi[ 	]+.*
.*:[ 	]+[0-9a-f]+[ 	]+c\.j[ 	]+.*
.*:[ 	]+[0-9a-f]+[ 	]+jal[ 	]+.*
