#include "main.h"
#include <limits.h>

/**
 * set_bit - sets the value in a bit to 1 at
 *	given index
 * @n: the number
 * @index: the index of the bit
 * Return: 1 if it worked, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= CHAR_BIT * sizeof(unsigned long int *))
		return (-1);

	m <<= index;

	*n = (*n | m);

	return (1);
}
