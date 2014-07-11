.PHONY: all
all: hello64

uname := $(shell uname)
ifeq ($(uname),Darwin)
	format := mach
	syscalls := osx
endif
ifeq ($(uname),Linux)
	format := elf
	syscalls := linux
endif

%.elf.o: %.asm
	rm -f syscalls.inc
	ln -s linux.inc syscalls.inc
	fasm $< $*.o
	objconv -felf -ar:start:_start $*.o $@
	rm -f $*.o
	rm -f syscalls.inc

%.mach.o: %.asm
	rm -f syscalls.inc
	ln -s osx.inc syscalls.inc
	fasm $< $*.o
	objconv -fmacho -ar:start:_start -nu $*.o $@
	rm -f $*.o
	rm -f syscalls.inc

%.$(format).exe: %.$(format).o
	ld $< -o $@

%.elf.exe: %.elf.o
	/usr/local/gcc-4.8.1-for-linux64/bin/x86_64-pc-linux-ld $< -o $@

%: %.$(format).exe
	ln -f $< $@

.PHONY: clean
clean:
	rm -f *.elf.o *.mach.o syscalls.inc
