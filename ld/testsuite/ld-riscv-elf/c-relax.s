.option relax
.option arch, -c
.globl _start
_start:
lui	a0, %hi (_start)
addi	a0, a0, %lo (_start)
.option arch, +c
lui	a0, %hi (_start)
addi	a0, a0, %lo (_start)
call	zero, _start
.option arch, -c
call	zero, _start
