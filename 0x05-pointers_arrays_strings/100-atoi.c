#include "main.h"
/**
 * _atoi - converts the string to an integer
 * @s: string
 * Return: converts the integer from string
 */
int _atoi(char *s)
{
	unsigned int ch = 0;
	int a = 1;

	do {
		if (*s == '-')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			ch = (ch * 10) + (*s - '0');
		else if (ch > 0)
			break;
	} while (*s++);

	return (ch * a);
}
