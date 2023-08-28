#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the size
 */

void print_chessboard(char (*a)[8])
{
	char c = 'p';
	int i, j;
/*	char b[][8] = {
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'}
	}; */

	a[0][0] = 'r';
	a[0][1] = 'k';
	a[0][2] = 'b';
	a[0][3] = 'q';
	a[0][4] = 'k';
	a[0][5] = 'b';
	a[0][6] = 'k';
	a[0][7] = 'r';

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0)
				_putchar(a[i][j]);
			else if (i == 1)
				_putchar(c);
			else if (i > 1 && i < 6)
				_putchar(' ');
			else if (i == 6)
				_putchar(c - 32);
			else if (i == 7)
				_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
