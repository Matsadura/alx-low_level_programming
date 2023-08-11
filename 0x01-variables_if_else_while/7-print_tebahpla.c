#include <stdio.h>

/**
 * main - prints alphabets in reverse (lc)
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
