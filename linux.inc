; Syscall numbers
; http://lxr.linux.no/linux+v3.13.5/arch/x86/syscalls/syscall_64.tbl
define SYSCALL_OPEN      2
define SYSCALL_WRITE     1
define SYSCALL_MMAP      9
define SYSCALL_FTRUNCATE 77
define SYSCALL_PWRITE    18
define SYSCALL_FORK      57
define SYSCALL_WAITID    247
define SYSCALL_EXIT      60

; fcntls
; http://lxr.linux.no/linux+v3.13.5/include/uapi/asm-generic/fcntl.h
define O_RDONLY      0000000o
define O_WRONLY      0000001o
define O_RDWR        0000002o
define O_CREAT       0000100o
define O_EXCL        0000200o
define O_NOCTTY      0000400o
define O_TRUNC       0001000o
define O_APPEND      0002000o
define O_NONBLOCK    0004000o
define O_DSYNC       0010000o
define FASYNC        0020000o
define O_DIRECT      0040000o
define O_LARGEFILE   0100000o
define O_DIRECTORY   0200000o
define O_NOFOLLOW    0400000o
define O_NOATIME     1000000o
define O_CLOEXEC     2000000o
define O_SYNC        4000000o
define O_PATH        10000000o

; mmap() and mprotect() flags
; http://lxr.linux.no/linux+v3.13.5/include/uapi/asm-generic/mman-common.h
define MAP_SHARED     0x01
define MAP_PRIVATE    0x02
define MAP_FIXED      0x10
define MAP_ANON       0x20
define PROT_NONE      0000b
define PROT_READ      0001b
define PROT_WRITE     0010b
define PROT_EXEC      0100b
define PROT_SEM       1000b
define PROT_GROWSDOWN 0x01000000
define PROT_GROWSUP   0x02000000

; wait() flags
; http://lxr.linux.no/linux+v3.13.5/include/uapi/linux/wait.h
define WEXITED      0x04
define P_ALL        0
define P_PID        1
define P_PGID       2
define ECHILD       10
