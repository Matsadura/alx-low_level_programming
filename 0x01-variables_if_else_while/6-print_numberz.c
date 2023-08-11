#include <stdio.h>

/**
 * main - prints 0 to 9 withou using printf
 *
 * Return: 0 ( Success )
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
