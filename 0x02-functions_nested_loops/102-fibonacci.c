#include <stdio.h>

/**
 * main - prints first 50 fabonacci numbers
 * Return: 0
 */

int main(void)
{
	long first, second, next, i;

	first = 1;
	second = 2;
	next = first + second;

	printf("%ld, %ld", first, second);
	for (i = 3; i <= 50; i++)
	{
		printf(", %ld", next);
		first = second;
		second = next;
		next = first + second;
	}
	putchar('\n');
	return (0);
}
