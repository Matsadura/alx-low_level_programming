#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its
 *	parameteres
 * @n: number of parameters
 * Return: The sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, add = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(sum, int);
	}
	va_end(sum);

	return (add);
}
