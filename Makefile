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

syscalls.inc: $(syscalls).inc
	ln -s $< $@

%.elf.o: %.asm syscalls.inc
	fasm $< $@

%.mach.o: %.elf.o
	objconv -fmacho -nu -ar:start:_start $< $@

%.exe: %.o
	ld $< -o $@

%: %.$(format).exe
	ln $< $@

.PHONY: clean
clean:
	rm *.elf.o *.mach.o
