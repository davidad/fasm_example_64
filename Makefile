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

%.o: %.asm syscalls.inc
	fasm $< $@

%.elf.o: %.o
	objconv -felf -ar:start:_start $< $@

%.mach.o: %.o
	objconv -fmacho -ar:start:_start -nu $< $@

%.exe: %.o
	ld $< -o $@

%: %.$(format).exe
	ln -f $< $@

.PHONY: clean
clean:
	rm *.elf.o *.mach.o
