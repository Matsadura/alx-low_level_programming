#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 * Return: 0 ( Success )
 */

int main(void)
{
	char alpha = 'a';
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
