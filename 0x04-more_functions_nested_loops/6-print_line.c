#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should
 *	be printed
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n; i++)
	{
		if (n >= 1)
			_putchar('_');
		else
			break;
	}
	_putchar('\n');
}
