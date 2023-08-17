#include "main.h"

/**
 * _twodigits - prints a two digits number
 * @a: the number
 */
void _twodigits(int a)
{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
}


/**
 * more_numbers - prints 10 times the numbers
 *	from 0 to 14
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num <= 14; num++)
	{
		if (num <= 9)
			_putchar(num + '0');
		else
			_twodigits(num);
	}
	_putchar('\n');
}
