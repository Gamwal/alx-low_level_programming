#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: integer describing the location
 *
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[n] != '\0')
		dest[i] = '\0';

	return (dest);
}
