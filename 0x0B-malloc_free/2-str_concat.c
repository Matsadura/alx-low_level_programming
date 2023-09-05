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
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to a newly allocated space
 *	in memory which contains the contents
 *	of s1 followed by s2 and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len1, len2;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1 ; i++)
	{
		str[j] = s1[i];
		j++;
	}
	for (i = 0; i < len2 ; i++)
	{
		str[j] = s2[i];
		j++;
	}

	str[j] = '\0';
	return (str);
}
