#include "main.h"

/**
 * _strlen - returns the length of a string
 * @a: the string
 * Return: the length
 */

int _strlen(char *a)
{
	int i = 0;

	while (a[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) ; i >= 0; i--)
	{
			_putchar(s[i]);
	}
	_putchar('\n');
}
