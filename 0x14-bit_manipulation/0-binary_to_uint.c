#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _pow_recursion - returns the value of x
 *	raised to the power of y
 * @x: the integer
 * @y: the power
 * Return: the value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y + -1));
}

/**
 * binary_to_uint - converts a binary number
 *	to an unsigned int
 * @b: the string to convert
 * Return: the converted number, or 0 if
 *	-there is one or more chars in the string
 *	-b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int x = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		else if (b[i] == 49)
			x += _pow_recursion(2, len - i - 1);
	}
	return (x);
}
