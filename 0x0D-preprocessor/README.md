# C Preprocessor
The C Preprocessor, often referred to simply as the "preprocessor," is an essential component of the C programming language. It is a text-processing tool that operates on your C source code before it is compiled. The primary purpose of the C Preprocessor is to perform various text manipulations and replacements, which allows developers to write more maintainable, flexible, and portable code.

One of the most common tasks of the C Preprocessor is handling preprocessor directives, which are special instructions embedded in your code using the # symbol. These directives provide instructions to the preprocessor to manipulate the source code in various ways. For example, ``#include`` is used to insert the contents of header files into your code, while ``#define`` is used for creating macros, which are code templates that can be expanded throughout your program.

Macros are a powerful feature of the C Preprocessor, enabling code reuse and abstraction. They can be used to define constants, inline functions, and more. Conditional compilation is another critical aspect of the preprocessor, allowing developers to include or exclude portions of code based on conditions that are evaluated at compile-time. This is particularly useful for creating platform-independent code and handling various build configurations.
## Learning Objectives
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

| File      | Description |
| ----------- | ----------- |
| [0-object_like_macro.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h) | A header file that defines a macro named ``SIZE`` as an abbreviation for the token ``1024``. |   
| [1-pi.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h) | A header file that defines a macro named ``PI`` as an abbreviation for the token ``3.14159265359``. |
| [2-main.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0D-preprocessor/2-main.c) | Prints the name of the file it was compiled from. |
| [3-function_like_macro.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h) | A function-like macro ``ABS(x)`` that computes the absolute value of a number x. |
| [4-sum.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h) | A function-like macro ``SUM(x, y)`` that computes the sum of the numbers ``x`` and ``y``. |
