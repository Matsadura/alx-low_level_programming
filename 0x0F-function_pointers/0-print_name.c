#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: fucntion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL || name[0] == '\0')
		return;
	f(name);
}
