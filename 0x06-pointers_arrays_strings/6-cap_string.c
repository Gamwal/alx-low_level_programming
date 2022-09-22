#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @b: string to be capitalized
 *
 * Return: Capitalized string
 */

char *cap_string(char *b)
{
	int i, j;

	while (b[i])
	{
		if (!(b[i] >= 97 && b[i] <= 122))
			i++;
		else
			if (b[i - 1] == 9 ||
					b[i - 1] == 10 ||
					b[i - 1] == 32 ||
					b[i - 1] == 33 ||
					b[i - 1] == 34 ||
					b[i - 1] == 40 ||
					b[i - 1] == 41 ||
					b[i - 1] == 44 ||
					b[i - 1] == 46 ||
					b[i - 1] == 59 ||
					b[i - 1] == 63 ||
					b[i - 1] == 123 ||
					b[i - 1] == 125 ||
					i == 0)
				b[i] -= 32;
		i++
	}
	return (b);
}
