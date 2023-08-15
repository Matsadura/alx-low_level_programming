#include <stdio.h>

/**
 * main - prints first 50 fabonacci numbers
 * Return: 0
 */

int main(void)
{
	long first, second, next, i, sum = 2;

	first = 1;
	second = 2;
	next = first + second;

	for (i = 2; i <= 50; i++)
	{
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
		next = first + second;

		if (next > 4000000)
			break;
	}
	printf("%ld\n", sum);
	return (0);
}
