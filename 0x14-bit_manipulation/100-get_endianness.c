#include "main.h"

/**
 * get_endianness - detects the endian type
 * Return: 0 if big endian otherwise 1
 */

int get_endianness(void)
{
	unsigned int i = 0x1234;
	unsigned char *e = (unsigned char *)&i;

	if (e[0] == 0x12)
		return (0);
	else
		return (1);
}
