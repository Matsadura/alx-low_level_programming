#include <stdio.h>

/**
 * main - prints all combinations
 *	of two two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b && a != b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a == 98 && b == 99)
					break;
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
