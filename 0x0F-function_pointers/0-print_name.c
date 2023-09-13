#include "function_pointers.h"
#include <stddef.h>

/**
 * _puts_recursion - prints a string
 * @s: the string
 */
void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * print_name - prints a name
 * @name: the name
 * @f: fucntion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
