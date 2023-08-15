#include "main.h"

/**
 * print_alphabet - prints the alphabet in
 *		lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

