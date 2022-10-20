#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *nodeptr = h;

	while (nodeptr != NULL)
	{
		if (nodeptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nodeptr->len, nodeptr->str);
		}
		count++;
		nodeptr = nodeptr->next;
	}

	return (count);
}
