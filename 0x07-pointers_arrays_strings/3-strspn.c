#include "main.h"

/**
 * _strspn - gets the length of a prefix
 *	substring
 * @s: the string
 * @accept: the bytes
 * Return: the number of bytes in the initial
 *	segment of s which consists of only
 *	bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
