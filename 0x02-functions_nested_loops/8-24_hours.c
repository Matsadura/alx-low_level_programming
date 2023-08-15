#include "main.h"

/**
 * jack_bauer - prints the clock
 *	from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int ab, c, d;

	ab = 0;
	while (ab <= 23)
	{
			c = 0;
			while (c <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar((ab / 10) + '0');
					_putchar((ab % 10) + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					if (ab == 23 && c == 5 && d == 9)
						break;
					d++;
				}
				c++;
			}
		ab++;
	}
}
