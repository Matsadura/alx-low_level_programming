#include "main.h"

/**
 * get_bit - Returns the value of a bit at a
 *	given index
 * @n: the number
 * @index: the index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 1;
	unsigned int b;

	if (n == 0)
		return (0);

	m <<= index;

	b = (n & m) >> index;

	return (b);
}
