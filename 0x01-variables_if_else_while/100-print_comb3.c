#include <stdio.h>

/**
 * main - prints all possible different
 *	combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;
	int b;

	while (num <= 9)
	{
		b = num + 1;
		while (b <= 9)
		{
			putchar(num + '0');
			putchar(b + '0');
			if (num == 8 && b == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			b++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
