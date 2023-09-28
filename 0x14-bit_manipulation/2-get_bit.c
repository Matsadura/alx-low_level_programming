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
	unsigned int i;
	unsigned long int m = 1;
	unsigned long int b, tmp = n;

	if (n == 0 && index > 0)
		return (-1);

	while (n != 0)
	{
		n >>= 1;
		i++;
	}
	if (index > i)
		return (-1);

	m <<= index;

	b = (tmp & m) >> index;

	return (b);
}
