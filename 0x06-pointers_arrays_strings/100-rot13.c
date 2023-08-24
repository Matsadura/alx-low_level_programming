#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: the string to encode
 * Return: pointer to string
 */

char *rot13(char *s)
{
	int i, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char tmp;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		tmp = s[i];
		for (j = 0 ; A[j] != '\0'; j++)
		{
			if (s[i] == A[j])
			{
				tmp = B[j];
				break;
			}
		}
		s[i] = tmp;
	}
	return (s);
}
