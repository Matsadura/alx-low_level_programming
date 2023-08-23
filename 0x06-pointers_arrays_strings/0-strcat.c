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
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int j, len = _strlen(dest);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
