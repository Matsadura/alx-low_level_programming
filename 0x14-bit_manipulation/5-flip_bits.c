#include "main.h"

/**
 * flip_bits - returns the number of bits you need
 *	to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = n ^ m, mask = 1;
	int j = 0;

	while (s)
	{
		if ((mask & s) == 1)
			j++;
		s >>= 1;
	}

	return (j);
}
