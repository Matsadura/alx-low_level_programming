#include "main.h"
#include <stddef.h>

/**
 * len - return the length of a string
 * @s: the string
 * Return: the length
 */

unsigned int len(char *s)
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
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the
 *	located substring or NULL if the
 *	substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i + j])
				return (haystack + i);
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	if (haystack[i] == needle[j] && needle[j] == '\0')
		return (haystack + i - len(needle));
	return (NULL);
}
