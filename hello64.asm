format ELF64
include "syscalls.inc"
public start

start:
	mov	edx,msg_size
	lea	rsi,[msg]
	mov	edi,1		        ; stdout
	mov	eax, SYSCALL_WRITE
	syscall

	xor	edi,edi
	mov	eax, SYSCALL_EXIT
	syscall

msg db 'Hello world!',0xA
msg_size = $-msg
