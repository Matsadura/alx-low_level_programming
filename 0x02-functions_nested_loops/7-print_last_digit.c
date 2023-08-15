#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: the number to print it's last digit
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	int last, abs_last;

	last = n % 10;
	abs_last = last * (-1);

	if (last >= 0)
	{
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(abs_last + '0');
		return (abs_last);
	}
}
