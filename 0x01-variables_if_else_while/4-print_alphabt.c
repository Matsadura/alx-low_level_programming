#include <stdio.h>

/**
 * main - prints alphabets in lowercace exept e q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 96;
	while (alpha < 'z')
	{
		alpha++;
		if (alpha == 'e' || alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
