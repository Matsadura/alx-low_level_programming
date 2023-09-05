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
 * _strcpy - copies a strings
 * @src: the string to copy
 * @dest: the destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - concatenates all the arguments
 *	of the program
 * @ac: argument count
 * @av: the arguments
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, len_sum = 0;
	char *str, *total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strlen(av[i]);
		len_sum += _strlen(av[i]) + 1;
	}
	len_sum++;

	str = malloc(len_sum);
	if (str == NULL)
		return (NULL);

	total = str;
	for (i = 0; i < ac ; i++)
	{
		_strcpy(str, av[i]);
		str += _strlen(av[i]);
		*str = '\n';
		str++;
	}
	*str = '\0';
	return (total);
}
