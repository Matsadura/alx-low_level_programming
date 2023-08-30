#include "main.h"

/**
 * find_prime - test if a number is a prime
 * @x: number
 * @y: helper
 * Return: 1 or 0
 */

int find_prime(int x, int y)
{
	if (x % y == 1)
		return (1);
	else if (x % y == 0)
		return (0);
	else
		return (find_prime(x, y + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: the number
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_prime(n, 2));
}
