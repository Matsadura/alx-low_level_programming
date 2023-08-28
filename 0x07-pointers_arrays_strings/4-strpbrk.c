#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set
 *	of bytes
 * @s: the string
 * @accept: the set of bytes
 * Return: pointer to the byte s that matches one
 *	of the bytes in accept or NULL if no such
 *	byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
