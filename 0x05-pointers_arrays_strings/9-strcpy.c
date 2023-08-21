#include "main.h"

/**
 * _strcpy - copies a strings
 * @src: the string to copy
 * @dest: the destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (src[0] == '\0')
		dest[0] = '\0';
	for (i = 0; src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
