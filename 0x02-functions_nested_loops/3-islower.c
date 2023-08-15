#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: alphabet
 *
 * Return: 1 if 'c' is lowercase
 *	0 if otherwise
 */

int _islower(int c)
{

	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
