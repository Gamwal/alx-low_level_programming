#include "main.h"

/**
 * create_array - function that creates an array of chars,
 *		and initializes it with a specific char
 * @size: size of array to be created
 * @c: character
 *
 * Return: NULL if size = 0, else pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tab = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
	free(tab);
}
