# Function pointers in C
Function pointers are a powerful and advanced feature in the C programming language, enabling dynamic and flexible behavior in your code. They allow you to treat functions as first-class citizens, providing a mechanism to store, pass, and invoke functions at runtime.

A function pointer is a variable that stores the address of a function rather than holding a data value. This address can then be used to call the function indirectly. Function pointers open up a range of possibilities, including dynamic function selection, callback mechanisms, and plugin architectures.

Common use cases for function pointers include:

* ``Callback Functions``: Function pointers are often used to implement callback mechanisms. In this scenario, you pass a function pointer as an argument to another function, which then calls the specified function at an appropriate time. This pattern is widely used in event handling and asynchronous programming.

* ``Dynamic Function Selection``: Function pointers allow you to select and call different functions at runtime based on conditions or user input. This dynamic behavior is crucial in scenarios where the specific function to execute is determined during program execution.

* ``Plugin Architectures``: Function pointers are a key component of plugin architectures, where external modules or plugins can be loaded at runtime. By using function pointers, you can invoke functions within these modules without knowing their exact implementation until runtime.
## Learning Objectives
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

| File      | Description |
| ----------- | ----------- |
| [0-print_name.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c) | Prints a name. |
| [1-array_iterator.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c) | Executes a function given as a parameter on each element of an array. |
| [2-int_index.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c) |  Searches for an integer. |
| [3-calc.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h) | Contains all the function prototypes and data structures used by the program in task 3. |
| [3-get_op_func.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c) | Contains the function that selects the correct function to perform the operation asked by the user |
| [3-main.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c) | Performs simple operations : Add, Sub, Mul, Div, Mod. |
| [3-op_functions.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c) | Contains the 5 following functions: ``op_add``, ``op_sub``, ``op_mul``, ``op_div``, ``op_mod``. |
| [100-main_opcodes.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/100-main_opcodes.c) | Prints the [opcodes](https://en.wikipedia.org/wiki/Opcode). |
| [function_pointers.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h) | The header file. |
