#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: results similar to standard strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	return (i - j);
}
