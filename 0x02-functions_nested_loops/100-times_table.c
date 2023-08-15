#include "main.h"

/**
 * comma_3spaces - prints a ',' and three spaces
 *
 * Return: void
 */

void comma_3spaces(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
/**
 * _2digits - prints a two digits number
 *	and comma and two spaces
 *@a: the number to print
 * Return: void
 */

void _2digits(int a)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');

}

/**
 * _3digits - prints a three digits number
 *@b: the number to print
 * Return: void
 */

void _3digits(int b)
{
	_putchar(',');
	_putchar(' ');
	_putchar((b / 100) + '0');
	_putchar(((b / 10) % 10) + '0');
	_putchar((b % 10) + '0');

}

/**
 * print_times_table - prints the timestable of n
 * @n: the times table of n
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;
			if (n == 0)
				_putchar('0');
			else if (n > 15)
				return;
			else if (k == 0 && i == 0)
			{
				_putchar(k + '0');
				if (j == n)
					break;
				comma_3spaces();
			}
			else if (k == 0 && i >= 1)
				_putchar(k + '0');
			else if (k <= 9)
			{
				comma_3spaces();
				_putchar((k % 10) + '0');
			}
			else if (k > 9 && k <= 99)
			{
				_2digits(k);
			}
			else if (k > 99)
			{
				_3digits(k);
			}
		}
		_putchar('\n');
	}
}
