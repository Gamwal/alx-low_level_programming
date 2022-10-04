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
	
	if (str == NULL)
		return (NULL);

	tab = malloc(sizeof(str));
	
	if (tab == NULL)
		return (NULL);

	tab = str;

	return (tab);
}
