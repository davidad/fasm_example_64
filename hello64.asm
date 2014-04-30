format ELF64
public start

start:
	mov	edx,msg_size
	lea	rsi,[msg]
	mov	edi,1		        ; stdout
	mov	eax,0x2000004		; SYSCALL_WRITE
	syscall

	xor	edi,edi
	mov	eax,0x2000001		; SYSCALL_EXIT
	syscall

msg db 'Hello world!',0xA
msg_size = $-msg
