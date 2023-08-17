#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int row, colomn;

	for (row = 1; row <= size; row++)
	{
		for (colomn = 1; colomn <= size; colomn++)
		{
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
