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
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the result of the compareson
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, max;

	if (_strlen(s1) <= _strlen(s2))
		max = _strlen(s1);
	else
		max = _strlen(s2);
	for (i = 0; i <= max; i++)
		j = s1[i] - s2[i];
	return (j);
}
