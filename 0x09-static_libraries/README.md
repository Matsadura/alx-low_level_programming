# Building Efficient Programs: A Guide to Static Libraries
  In the C programming language, a static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities. Static libraries aren't loaded by the compiler at run-time; only the executable file need be loaded.
## Learning Objectives
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ``ar``, ``ranlib``, ``nm``


| File      | Description |
| ----------- | ----------- |
| [create_static_lib.sh](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh) | Creates a static library called ``liball.a`` from all the ``.c`` files that are in the current directory. |
| [libmy.a](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x09-static_libraries/libmy.a) | A static library containing all the functions. |
| [main.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x09-static_libraries/main.h) | The header file. |
