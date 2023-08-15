#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *		10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int rep;
	char alpha;

	rep = 0;
	while (rep < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		rep++;
	}
}
