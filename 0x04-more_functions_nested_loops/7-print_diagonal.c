#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: number of spaces
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 2; i <= n + 1; i++)
	{
		for (j = 2; j <= i - 1; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
