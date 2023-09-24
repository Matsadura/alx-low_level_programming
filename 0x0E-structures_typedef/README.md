# Understanding C Structures and Typedef
In the C programming language, structures (structs) and the typedef keyword play pivotal roles in organizing and enhancing the flexibility of your code. They provide a way to define custom data types, which can encapsulate multiple data members of different types, creating more complex and meaningful data structures.

A ``structure`` is a composite data type that allows you to group together variables of various types under a single name. Each member of a structure can be a different data type, such as integers, floats, characters, or even other structures. Structures enable you to represent complex entities, like employees or students, by combining relevant data into a single unit. Accessing members of a structure is done using the dot (.) operator.

``Typedef`` is a C keyword that allows you to create custom type synonyms. It provides a way to define more expressive names for existing data types, enhancing code readability and maintainability. By using typedef, you can make your code more self-documenting and improve its portability. For example, you can define a new name for a structure, making it easier to declare variables of that type.
## Learning Objectives
* What are structures, when, why and how to use them
* How to use ``typedef``

| File      | Description |
| ----------- | ----------- |
| [1-init_dog.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c) | Initialize a variable of type ``struct dog``. |
| [2-print_dog.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c) | Prints a ``struct dog``. |
| [4-new_dog.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c) | Creates a new dog. |
| [5-free_dog.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c) | Frees dogs. |
| [dog.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h) | Defines a new type ``struct dog`` with the following elements: ``name, type = char *``, ``age, type = float,`` ``owner, type = char *``. and defines a new type dog_t as a new name for the type ``struct dog``. |
