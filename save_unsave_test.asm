format ELF64
include "syscalls.inc"
include "macros.inc"
public start

start:
	mov	edx,msg_size-1
	lea	rsi,[msg]
@@:

	zero edi
  save rdi
    mov edi, 1
    save rdi, rdx, rsi
      zero di, edx, rsi
    unsave
    add rsi, rdi
    mov	eax, SYSCALL_WRITE
    syscall
  unsave

	mov	eax, SYSCALL_EXIT
	syscall

msg db '0123456789',0xA
msg_size = $-msg
