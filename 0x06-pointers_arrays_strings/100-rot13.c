#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @b: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *b)
{
	int i = 0;
	int j;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	       	'V', 'W', 'X', 'Y','Z'
	
		
	while (b[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (b[i] == alphabet[j])
			{
				b[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (b);
}
