#include "main.h"
#include <stdio.h>

/**
 * ASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int ASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * Hexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void Hexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int ch, a = 0;

	while (a < end)
	{
		ch = *(b + a + start);
		if (!ASCII(ch))
			ch = 46;
		printf("%c", ch);
		a++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			Hexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}

