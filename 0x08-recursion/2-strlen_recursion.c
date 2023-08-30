#include "main.h"

/**
 * _strlen_recursion - returns the length of
 *	a string
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (i);
	return (1 + _strlen_recursion(s + 1));
}
