.attribute arch, "rv32i"
.option relax
foo:
.align	2
lui	a0, %hi (foo)
addi	a0, a0, %lo (foo + 4)
.option arch, +a
lui	a0, %tprel_hi (i)
add	a0, a0, tp, %tprel_add (i)
lw	a1, %tprel_lo (i) (a0)
.option arch, -a, +c
L1: auipc	a0, %pcrel_hi (foo)
addi	a0, a0, %pcrel_lo (L1)
call	foo

.globl	i
.section .tbss, "awT", @nobits
.type	i, @object
.size	i, 4
i:
.zero	4
