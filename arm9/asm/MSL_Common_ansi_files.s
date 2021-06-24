	.include "global.inc"
	.include "asm/macros.inc"



	.text



	arm_func_start __flush_all
__flush_all: ; 0x020DE388
	stmdb sp!, {r3-r9,lr}
	ldr r0, _020DE3EC ; =__files
	mov r4, #0x0
	mov r5, #0x1
	mov r8, r0
	mvn r9, #0x0
	mov r7, r4
	mov r6, #0x4c
_020DE3A8:
	ldr r1, [r0, #0x4]
	mov r1, r1, lsl #0x16
	movs r1, r1, lsr #0x1d
	beq _020DE3C4
	bl fflush
	cmp r0, #0x0
	movne r4, r9
_020DE3C4:
	cmp r5, #0x3
	movge r0, r7
	bge _020DE3DC
	mul r0, r5, r6
	add r5, r5, #0x1
	add r0, r8, r0
_020DE3DC:
	cmp r0, #0x0
	bne _020DE3A8
	mov r0, r4
	ldmia sp!, {r3-r9,pc}
	.balign 4
_020DE3EC: .word __files
	arm_func_end __flush_all

	.section .exceptix,4

	.word __flush_line_buffered_output_files
	.short 141
	.word 0x00403F00
	.word __flush_all
	.short 105
	.word 0x00403F00
