; Syscall numbers
; http://www.opensource.apple.com/source/xnu/xnu-1456.1.26/bsd/kern/syscalls.master
define SYSCALL_OPEN      0x2000005
define SYSCALL_WRITE     0x2000004
define SYSCALL_MMAP      0x20000C5
define SYSCALL_FTRUNCATE 0x20000C9
define SYSCALL_PWRITE    0x200009A
define SYSCALL_FORK      0x2000002
define SYSCALL_WAITID    0x20000AD
define SYSCALL_EXIT      0x2000001

; fcntls
; http://www.opensource.apple.com/source/xnu/xnu-1456.1.26/bsd/sys/fcntl.h
define O_RDONLY      0x0000
define O_WRONLY      0x0001
define O_RDWR        0x0002
define O_NONBLOCK    0x0004
define O_APPEND      0x0008
define O_SHLOCK      0x0010
define O_EXLOCK      0x0020
define O_ASYNC       0x0040
define O_SYNC        0x0080
define O_NOFOLOW     0x0100
define O_CREAT       0x0200
define O_TRUNC       0x0400
define O_EXCL        0x0800
define O_NOCTTY      0x20000
define O_DIRECTORY   0x100000
define O_SYMLINK     0x200000
define O_DSYNC       0x400000

; mmap() and mprotect() flags
; http://www.opensource.apple.com/source/xnu/xnu-2050.18.24/bsd/sys/mman.h
define MAP_SHARED    000000000001b
define MAP_PRIVATE   000000000010b
define MAP_FIXED     000000010000b
define MAP_RENAME    000000100000b
define MAP_NORESERVE 000001000000b
define MAP_INHERIT   000010000000b
define MAP_NOEXTEND  000100000000b
define MAP_SEMAPHORE 001000000000b
define MAP_NOCACHE   010000000000b
define MAP_JIT       100000000000b
define MAP_FILE      0x0000
define MAP_ANON      0x1000
define PROT_NONE     000b
define PROT_READ     001b
define PROT_WRITE    010b
define PROT_EXEC     100b

; wait() flags (same as Linux)
; http://lxr.linux.no/linux+v3.13.5/include/uapi/linux/wait.h
define WEXITED      0x04
define P_ALL        0
define P_PID        1
define P_PGID       2
define ECHILD       10
