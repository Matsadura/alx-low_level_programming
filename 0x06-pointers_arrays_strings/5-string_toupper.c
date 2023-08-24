#include "main.h"
/**
 * string_toupper - changes all lowercase
 *	letters of a string to uppercase
 * @s: the string
 * Return: pointer to the string
 */

char *string_toupper(char *s)
{
	int i;
	char a = 32;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= a;
	}
	s[i] = '\0';
	return (s);
}
