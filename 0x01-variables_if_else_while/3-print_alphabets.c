#include <stdio.h>

/**
 * main - prints alphabets in lower and then upper case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
