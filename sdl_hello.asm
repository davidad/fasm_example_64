format ELF64
include "syscalls.inc"
include "sdl.inc"
public start

title db "SDL Hello!"

start:
  mov edi, SDL_INIT_VIDEO
  call SDL_Init

  lea rdi, [msg]
   
