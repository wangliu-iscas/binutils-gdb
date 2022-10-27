
.section .text1, "ax"
.global _start
.align 2
_start:
	call foo
	j .
	.size _start, . - _start

.section .text2, "ax"
.align 2
.global foo
.type foo, @function
foo:
	ret
	.size foo, . - foo

.data
.global gdata
.align 10
gdata:
	.long 0
	.size gdata, . - gdata
