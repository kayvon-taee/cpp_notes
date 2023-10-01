# How are C++ files compiled to an executable?
C++ uses a toolchain which is a pipeline of software tools that converts code in a few steps:

## 1. C++ source files
The first step is where your C++ source files are fed to a compiler which translates C++ code into assembly language. Assembly language is a human-readable version of the native language of the target CPU. 

## 2. Assembling
The assembly code is passed to an assembler, which converts it to an object file. Object files are simply the machine code output of an assembler. The object code is usually relocatable but not directly executable. You can also write your own assembly code which will produce another object file, which is typically used in embedded programming. Another use case is where you include libraries where you don't have access to the source code. Sometimes libraries in C++ are distributed as object files such as I/O stream or string.

## 3. Linking
Once you have your object files, these are passed to the linker. The linker stitches up the object files and produce a binary executable file. This is stitching is necessary as producing many executables can lead to undesirable side effects on your computer! Most of this is abstracted by your IDE using a CMake file, but it's possible to use the compiler in the command line to do this yourself which can get complicated
