#include "main.h"

/**
 * *_memset - function that fills memeory with constant byte
 * @s: original character
 * @b: constant byte
 * @n: number of first bytes to be filled
 *
 * Return: pointer to the filled memory *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;
	unsigned int index;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
