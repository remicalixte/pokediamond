	.include "asm/macros.inc"
	.include "global.inc"

	.section .exceptix,4

	.word abort
	.short 37
	.word 0x00100000
	.word exit
	.short 77
	.word 0x00100100
	.word __exit
	.short 297
	.word 0x00200300
