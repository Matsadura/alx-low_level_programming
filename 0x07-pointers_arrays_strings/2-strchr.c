#include "main.h"
#include <unistd.h>

/**
 * _strchr - locates a chracter in a string
 * @s: the string
 * @c: the char
 * Return: pointer to first occurence of char c
 *	or NULL if it's not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
		return (s + i);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}