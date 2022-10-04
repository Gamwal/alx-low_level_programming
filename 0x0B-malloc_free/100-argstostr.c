#include "main.h"

/**
 * argstostr - program concatenates all the arguments
 * @ac: number of arguments passed to program
 * @av: array of pointers to the arguments
 *
 * Return: NULL if ac or av is NULL or function fails
 *         else, a pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int index, arg, byte, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
