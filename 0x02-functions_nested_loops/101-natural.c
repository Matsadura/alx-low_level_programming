#include <stdio.h>

/**
 * main - prints the sum of all multiples of
 *	3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	long i, sum = 0;

	for (i = 0; i <= 1023; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%ld\n", sum);
	return (0);
}
