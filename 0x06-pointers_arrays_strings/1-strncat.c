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
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: most bytes used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
