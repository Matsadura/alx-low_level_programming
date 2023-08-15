#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @int: the value to compute
 * Return: the abs
 */

int _abs(int var1)
{
	int var2;

	if (var1 >= 0)
	{
		return (var1);
	}
	else
	{
		var2 = var1 * (-1);
		return (var2);
	}
}
