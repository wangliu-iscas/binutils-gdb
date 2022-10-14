# Check illegal in AVXIFMA instructions

	.text
	.arch .noavx512ifma
_start:
	vpmadd52huq %xmm2,%xmm4,%xmm2
