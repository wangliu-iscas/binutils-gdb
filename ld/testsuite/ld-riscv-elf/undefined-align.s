# Make sure that the linker messages take into account the modification
# of a symbol's value made during the section relaxation.
# Here, "_start" will have an offset made by ".align 4" which will be
# removed during the relaxation of R_RISCV_ALIGN.
	.text
	.align	4
	.globl	_start
	.type	_start, @function
_start:
	call	foo
