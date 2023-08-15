#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the parametre to check
 *
 * Return: 1 if 'c' is a letter, lower or upper.
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
