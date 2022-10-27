
ENTRY(_start)

SECTIONS
{
	. = 0x100000;

	.text1 : {
		*(.text1)
	}

	. = 0x200000 - 100;

	.text2 : {
		*(.text2)
	}

	. = 0x300000;
	.data : {
		*(.data)
	}
}
