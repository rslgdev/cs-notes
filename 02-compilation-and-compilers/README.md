# Compilation Stages

When you write C code, it goes through 4 stages before becoming a program your computer can run.

## Stage 1 — Preprocessing

`gcc -E reference.c -o reference.i`

> The preprocessor handles all lines starting with `#`.
> `#include <stdio.h>` gets replaced with the actual contents of that header file.
> Run this and open `reference.i` — you'll see your 8 line file became hundreds of lines.

## Stage 2 — Compilation

`gcc -S reference.i -o reference.s`

> The compiler translates C code into Assembly language — low level instructions specific to your CPU.
> Open `reference.s` to see what your `printf` actually became at the hardware level.

## Stage 3 — Assembly

`gcc -c reference.s -o reference.o`

> The assembler converts Assembly into machine code — raw binary your CPU understands.
> The output `reference.o` is called an object file. It's not yet executable.

## Stage 4 — Linking

`gcc reference.o -o reference`

> The linker combines your object file with external libraries (like `stdio`) into a final executable.
> Now you can run it: `./reference`
