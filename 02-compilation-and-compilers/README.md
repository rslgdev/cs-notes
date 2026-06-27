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

---

## How Compilation Systems Work

> For this simple scenario of running Hello World in terminal we can just compile and run with no worries. However, there are important reasons to understand how compilation systems work and why it matters for us as programmers:

- **Optimizing program performance** — even though compilers are smart,
  understanding how C translates to machine code helps us make better decisions.
  Simple questions like "is a switch faster than if-else?" or "is a while loop
  faster than a for loop?" only make sense when you understand what the compiler
  actually generates underneath. All this and more will be covered in later sections.

- **Understanding link-time errors** — linker related errors
  are some of the most confusing and hard to understand errors,
  especially when writing large software systems. For example, what does
  it mean when the linker reports that it cannot resolve a reference? What is the
  difference between a static variable and a global variable? What happens if
  you define two global variables in different C files with the same name? What
  is the difference between a static library and a dynamic library? Why does it
  matter what order we list libraries on the command line?
  Most linker errors appear at compile or link time, but the worst ones
  only surface at runtime — when it's too late and much harder to debug.
  All these questions will be answered in later sections.

- **Avoiding security holes** — security is, if not the most, then
  one of the most important things to understand in order to write secure code.
  A key part of this is carefully restricting what data we accept from untrusted
  sources.
  The first step toward that is understanding how data and control information
  is stored on the program stack. This, along with methods that can be used by
  the programmer, compiler, and operating system to prevent attacks,
  will be covered in later sections.
