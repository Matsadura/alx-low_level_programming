#include <stdio.h>

/**
 * main - prints first 50 fabonacci numbers
 * Return: 0
 */

int main(void)
{
	int a[50], i = 50, next;

	a[0] = 1;
	a[1] = 2;
	next = a[0] + a[1];

	printf("%d %d ", a[0], a[1]);
	for (i = 2; i <= 50; i++)
	{
		printf("%d ", next);
		i++;
		a[0] = a[1];
		a[1] = next;
		next = a[0] + a[1];
	}
	putchar('\n');
	return (0);
}
