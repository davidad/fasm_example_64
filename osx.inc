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
define MAP_SHARED    0b000000000001
define MAP_PRIVATE   0b000000000010
define MAP_FIXED     0b000000010000
define MAP_RENAME    0b000000100000
define MAP_NORESERVE 0b000001000000
define MAP_INHERIT   0b000010000000
define MAP_NOEXTEND  0b000100000000
define MAP_SEMAPHORE 0b001000000000
define MAP_NOCACHE   0b010000000000
define MAP_JIT       0b100000000000
define MAP_FILE      0x0000
define MAP_ANON      0x1000
define PROT_NONE     0b000
define PROT_READ     0b001
define PROT_WRITE    0b010
define PROT_EXEC     0b100

; wait() flags (same as Linux)
; http://lxr.linux.no/linux+v3.13.5/include/uapi/linux/wait.h
define WEXITED      0x04
define P_ALL        0
define P_PID        1
define P_PGID       2
define ECHILD       10
