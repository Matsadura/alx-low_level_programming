# File I/O
"File I/O" (Input/Output) is a fundamental aspect of programming that involves reading from and writing to files. This capability is essential for tasks like data storage, retrieval, and manipulation. Here's an exploration of key concepts related to file I/O:

1. **Opening and Closing Files:**
   - **Opening a File:** Before reading from or writing to a file, it must be opened. This is done using functions like `open()` in languages like C or `open()` method in Python.

   - **Closing a File:** It's important to close a file after using it to free up system resources. This is typically done using functions like `close()` in C or `close()` method in Python.

2. **Reading from Files:**
   - **Sequential Read:** Reading a file sequentially from the beginning to the end. This is common for tasks like processing a log file.

   - **Random Access:** Jumping to specific positions in a file to read data. Some languages support functions like `seek()` to achieve random access.

3. **Writing to Files:**
   - **Sequential Write:** Writing to a file sequentially, adding content at the end of the file. This is typical for tasks like logging.

   - **Random Access Write:** Modifying specific parts of a file. This is often necessary for tasks like updating a configuration file.

4. **File Modes:**
   - **Read Mode (`r`):** Opens a file for reading.

   - **Write Mode (`w`):** Opens a file for writing. If the file already exists, it's truncated; if not, a new file is created.

   - **Append Mode (`a`):** Opens a file for writing, but data is added at the end of the file. If the file doesn't exist, a new one is created.

   - **Read/Write Mode (`r+` or `w+`):** Opens a file for both reading and writing.

5. **Error Handling:**
   - File I/O operations can fail for various reasons (e.g., file not found, insufficient permissions). Proper error handling is crucial to handle such scenarios.

6. **Binary vs. Text Mode:**
   - Some languages distinguish between binary and text modes. In binary mode, raw data is read or written, while in text mode, the system may perform some newline character conversion.

7. **Working with Streams:**
   - Many programming languages represent files as streams. This allows for seamless integration with other I/O operations.

8. **File Pointers:**
   - File pointers keep track of the position in the file. They are crucial for sequential reading and writing.

9. **File I/O in Different Languages:**
   - Syntax and functions for file I/O vary between programming languages. For example, C, Python, and Java have different approaches.

| File      | Description |
| ----------- | ----------- |
| [0-read_textfile.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c) | Reads a text file and prints it to the ``POSIX`` standard output. |
| [1-create_file.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c) | Creates a file. |
| [2-append_text_to_file.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c) | Appends text at the end of a file. |
| [3-cp.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c) | Copies the content of a file to another file. |
| [100-elf_header.c](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x15-file_io/100-elf_header.c) | Displays the information contained in the ``ELF`` header at the start of an ``ELF`` file. |
| [main.h](https://github.com/Matsadura/alx-low_level_programming/blob/master/0x15-file_io/main.h) | The header file. |
