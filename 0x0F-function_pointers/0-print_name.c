#include "function_pointers.h"
#include <stddef.h>

/**
 * _puts_recursion - prints a string
 * @s: the string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}

/**
 * print_name - prints a name
 * @name: the name
 * @f: fucntion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f = _puts_recursion;
	f(name);
}
