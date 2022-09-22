#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @b: string to be capitalized
 *
 * Return: Capitalized string
 */

char *cap_string(char *b)
{
	int i = 0;

	while (b[i])
	{
		while (!(b[i] >= 'a' && b[i] <= 'z'))
			i++;
		if (b[i - 1] == ' ' ||
		b[i - 1] == '\t' ||
		b[i - 1] == '\n' ||
		b[i - 1] == ',' ||
		b[i - 1] == ';' ||
		b[i - 1] == '.' ||
		b[i - 1] == '!' ||
		b[i - 1] == '?' ||
		b[i - 1] == '"' ||
		b[i - 1] == '(' ||
		b[i - 1] == ')' ||
		b[i - 1] == '{' ||
		b[i - 1] == '}' ||
		i == 0)
		b[i] -= 32;
		i++;
	}
	return (b);
}
