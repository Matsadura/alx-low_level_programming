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
 * _strdup - returns a pointer to a newly
 *	allocated space in memory, which contains
 *	a copy of the string given as a parameter
 * @str: the string
 * Return: Pointer
 */

char *_strdup(char *str)
{
	int len = _strlen(str), i;
	char *s;

	s = malloc(sizeof(char) * len);

	if (str == NULL || s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
