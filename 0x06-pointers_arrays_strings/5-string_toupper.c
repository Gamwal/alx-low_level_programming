#include "main.h"

/**
  * *string_toupper - function that changes all lowercase letters to uppercase
  * @b: string to be modified
  *
  * Return: the modified string
  */
char *string_toupper(char *b)
{
	int i = 0;

	while (b[i])
	{
		if (b[i] >= 97 && b[i] <= 122)
		{
			b[i] -= 32;
		}

		i++;
	}

	return (b);
}
