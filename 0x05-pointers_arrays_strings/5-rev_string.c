#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
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
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int tmp, i, length = _strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = tmp;
	}
}
