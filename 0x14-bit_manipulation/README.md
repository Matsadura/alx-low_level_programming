# Bit Manipulation
"Bit Manipulation" is a low-level programming technique that involves the manipulation of individual bits within binary numbers. It is often used in scenarios where performance optimization and resource efficiency are critical. Here are key concepts related to bit manipulation:

1. **Basic Bitwise Operators:**
   - **AND (`&`):** Sets a bit to 1 only if both corresponding bits are 1.
     - Example: `a & b`

   - **OR (`|`):** Sets a bit to 1 if at least one of the corresponding bits is 1.
     - Example: `a | b`

   - **XOR (`^`):** Sets a bit to 1 if only one of the corresponding bits is 1.
     - Example: `a ^ b`

   - **NOT (`~`):** Inverts the bits, changing 0s to 1s and vice versa.
     - Example: `~a`

   - **Left Shift (`<<`):** Shifts the bits to the left by a specified number of positions, filling in with zeros.
     - Example: `a << 2`

   - **Right Shift (`>>`):** Shifts the bits to the right by a specified number of positions.
     - Example: `a >> 2`

2. **Bitwise Operations in Practice:**
   - **Checking if a Bit is Set:**
     ```c
     if (num & (1 << bitPosition)) {
         // Bit is set
     }
     ```

   - **Setting a Bit:**
     ```c
     num |= (1 << bitPosition);
     ```

   - **Clearing a Bit:**
     ```c
     num &= ~(1 << bitPosition);
     ```

   - **Toggling a Bit:**
     ```c
     num ^= (1 << bitPosition);
     ```

3. **Bit Manipulation for Optimization:**
   - **Space Optimization:** In some cases, using individual bits can significantly reduce the memory footprint compared to using full bytes or integers.

   - **Algorithmic Optimization:** Bit manipulation is often used to optimize algorithms, such as those in cryptography or graphics processing.

4. **Bitwise Operations in Other Languages:**
   - Bit manipulation is not exclusive to low-level languages like C or C++. Higher-level languages might also support bitwise operations.

5. **Bitwise Operations for Flags:**
   - Flags in programming often use individual bits to represent different states or options.

6. **Bitwise Operations for XOR Swap:**
   - XOR can be used to swap values without using a temporary variable.
     ```c
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     ```

| File      | Description |
| ----------- | ----------- |
| [0-binary_to_uint.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c) | Converts a binary number to an ``unsigned int``. |
| [1-print_binary.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c) | Prints the binary representation of a number. |
| [2-get_bit.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c) | Returns the value of a bit at a given index. |
| [3-set_bit.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c) | Sets the value of a bit to ``1`` at a given index. |
| [4-clear_bit.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c) | Sets the value of a bit to ``0`` at a given index. |
| [5-flip_bits.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c) | Returns the number of bits you would need to flip to get from one number to another. |
| [100-get_endianness.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-get_endianness.c) | Checks the endianness. |
| [101-password](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/101-password) | The password of [this program](https://github.com/alx-tools/0x13.c) |
| [main.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x14-bit_manipulation/main.h) | The header file. |

