#include <stdio.h>

/**
 * main - prints 0 to 9
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
