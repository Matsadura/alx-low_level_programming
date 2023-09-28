#include "main.h"
#include <limits.h>

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the number
 * @index: the bit to change
 * Return: 1 if it worked, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= CHAR_BIT * sizeof(unsigned long int *))
		return (-1);

	m <<= index;
	m = ~m;

	*n = (*n & m);

	return (1);

}
