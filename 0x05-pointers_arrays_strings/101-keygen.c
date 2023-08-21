#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates passwords
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int code[100];
	int a, z, b;

	z = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		code[a] = rand() % 78;
		z += (code[a] + '0');
		putchar(code[a] + '0');
		if ((2772 - z) - '0' < 78)
		{
			b = 2772 - z - '0';
			z += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}
