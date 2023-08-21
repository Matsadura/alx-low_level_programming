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
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;
	int n1 = _strlen(str) / 2;
	int n2 = (_strlen(str) - 1) / 2;

	if (_strlen(str) % 2 == 0)
	{
		for (i = n1; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (_strlen(str) % 2 != 0)
	{
		for (i = n2 + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
