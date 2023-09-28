#include "main.h"

/**
 * print_binary - prints the binary representa-
 *	tion of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i = 0;

	if (n == 0)
		_putchar(0 + '0');

	while (tmp != 0)
	{
		tmp >>= 1;
		i++;
	}
	i--;

	while (i >= 0)
	{
		tmp = n;
		tmp >>= i;
		_putchar(tmp + '0');
		tmp <<= i;
		n = n - tmp;
		i--;
	}
}
