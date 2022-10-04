#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the
 *		string given as a parameter
 * @str: string to be allocated
 *
 * Return: NULL if str = NULL, otherwise pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == 0)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
