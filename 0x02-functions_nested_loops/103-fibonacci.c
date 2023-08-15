#include <stdio.h>

/**
 * main - prints first 50 fabonacci numbers
 * Return: 0
 */

int main(void)
{
	long first, second, next, i, sum = 0;

	first = 1;
	second = 2;
	next = first + second;

	for (i = 3; i <= 34; i++)
	{
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
		next = first + second;

	}
	printf("%ld\n", sum);
	return (0);
}
