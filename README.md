I'm switching from [`nasm`](http://www.nasm.us/) to [`fasm`](http://flatassembler.net/), because the latter has
a more expressive macro facility. The downside of `fasm` is that it doesn't support OSX. But, with some Google-fu and Makefile-fu,
I have made it support OSX, with the same level of portability and convenience that I had previously achieved
with `nasm`! (The key insights were found in [this forum thread](http://board.flatassembler.net/topic.php?t=13413).)

In order to use the Makefile here, you will need [`objconv`](http://www.agner.org/optimize/#objconv), and you will also
need an already-working `fasm`. If you're on OSX, that might be quite difficult, so I'm including a working OSX
`fasm` binary as a download in this repository.

Verify that you have these installed:

    $ fasm
    flat assembler  version 1.71.17
    usage: fasm <source> [output]
    $ objconv
    
    Object file converter version 2.32 for x86 and x86-64 platforms.
    Copyright (c) 2013 by Agner Fog. Gnu General Public License.

Then, it's as simple as

```ShellSession
$ git clone https://github.com/davidad/fasm_example_64.git
Cloning into 'fasm_example_64'...
remote: Counting objects: 13, done.
remote: Compressing objects: 100% (10/10), done.
remote: Total 13 (delta 3), reused 13 (delta 3)
Unpacking objects: 100% (13/13), done.
$ cd fasm_example_64
$ make
ln -s osx.inc syscalls.inc
fasm hello64.asm hello64.o
flat assembler  version 1.71.17  (16384 kilobytes memory)
2 passes, 467 bytes.
objconv -fmacho -ar:start:_start -nu hello64.o hello64.mach.o

Input file: hello64.o, output file: hello64.mach.o
Converting from ELF64 to Mach-O Little Endian64
Adding leading underscores to symbol names

  0 Debug sections removed
  0 Exception sections removed
  0 Changes in leading underscores on symbol names
  1 Symbol names changed
  1 Public symbol names aliased
ld hello64.mach.o -o hello64.mach.exe
ld: warning: -macosx_version_min not specified, assuming 10.6
ln -f hello64.mach.exe hello64
rm hello64.o hello64.mach.exe hello64.mach.o
$ ./hello64
Hello world!
```
