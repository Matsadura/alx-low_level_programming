#include "main.h"
#include <limits.h>

/**
 * get_bit - Returns the value of a bit at a
 *	given index
 * @n: the number
 * @index: the index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;
	unsigned long int b;

	if (index >= CHAR_BIT * sizeof(unsigned long int))
		return (-1);

	m <<= index;

	b = (n & m) >> index;

	return (b);
}
