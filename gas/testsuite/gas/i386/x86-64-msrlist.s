# Check 64bit MSRLIST instructions

	.allow_index_reg
	.text
_start:
	rdmsrlist		 #MSRLIST
	wrmsrlist		 #MSRLIST

.intel_syntax noprefix
	rdmsrlist		 #MSRLIST
	wrmsrlist		 #MSRLIST
