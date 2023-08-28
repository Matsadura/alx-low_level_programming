#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: the first bytes of the memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n - 1 || s[i] != '\0'; i++)
	{
		*(s + i) = b;
	}
	if (s[n] == '\0')
		*(s + i) = b;
	return (s);
}
