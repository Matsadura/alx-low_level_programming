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
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to the newly allocated space
 *	in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, len1, len2;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	if (n >= len2)
		n = len2;

	str = malloc(len1 + len2 - (len2 - n) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[j] = s1[i];
		j++;
	}

	for (i = 0; i < n; i++)
	{
		str[j] = s2[i];
		j++;
	}

	str[j] = '\0';
	return (str);
}
