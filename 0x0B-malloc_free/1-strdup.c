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
	char *tab;
	int i = 0, j = 0;
	
	if (str == NULL)
		return (NULL);

	while (str)
		i++;

	tab = malloc(sizeof(str) * i);

	if (tab == NULL)
		return (NULL);

	for (j = 0 j < i; j++)
		tab[j] = str[j];

	return (tab);
}
