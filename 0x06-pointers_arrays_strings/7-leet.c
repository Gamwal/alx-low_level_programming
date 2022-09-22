#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @b: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *b)
{
	int i = 0;
	int j;
	char c[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (b[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (b[i] == c[j] || b[i] - 32 == c[j])
			{
				b[i] = j + '0';
			}
		}
		i++;
	}
	return (b);
}
