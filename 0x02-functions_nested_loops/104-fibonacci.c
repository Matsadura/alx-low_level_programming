#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int c, boolean1, boolean2;
	long int first, second, next, fa2, a11, a22;

	first = 1;
	second = 2;
	boolean1 =  boolean2 = 1;
	printf("%ld, %ld", first, second);
	for (c = 0; c < 96; c++)
	{
		if (boolean1)
		{
			next = first + second;
			printf(", %ld", next);
			a1 = a2;
			a2 = fa;
		}
		else
		{
			if (boolean2)
			{
				a11 = a1 % 1000000000;
				a22 = a2 % 1000000000;
				a1 = a1 / 1000000000;
				a2 = a2 / 1000000000;
				boolean2 = 0;
			}
			fa2 = (a11 + a22);
			fa = a1 + a2 + (fa2 / 1000000000);
			printf(", %ld", fa);
			printf("%ld", fa2 % 1000000000);
			a1 = a2;
			a11 = a22;
			a2 = fa;
			a22 = (fa2 % 1000000000);
		}
		if (((a1 + a2) < 0) && boolean1 == 1)
			boolean1 = 0;
	}
	printf("\n");
	return (0);
}
