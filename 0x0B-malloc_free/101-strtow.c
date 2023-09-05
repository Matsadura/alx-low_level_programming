#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strncpy - copies a string
 * @dest: The string to copy to
 * @src: the string to copy
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: an array of strings
 */
char **strtow(char *str)
{
	int len, word_start, word_length, word_count, i, j;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = _strlen(str);
	words = malloc(sizeof(char *) * (len + 1));

	if (words == NULL)
		return (NULL);
	word_count = 0;
	i = 0;

	while (i < len)
	{
		while (str[i] == ' ' && i < len)
			i++;
		if (i >= len)
			break;
		word_start = i;

		while (str[i] != ' ' && i < len)
			i++;
		word_length = i - word_start;

		words[word_count] = malloc(sizeof(char) * (word_length + 1));
		if (words[word_count] == NULL)
		{
			for (j = 0; j < word_count; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		_strncpy(words[word_count], str + word_start, word_length);
		words[word_count][word_length] = '\0';
		word_count++;
	}
	words[word_count] = NULL;
	return (words);
}

