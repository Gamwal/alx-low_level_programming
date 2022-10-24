#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the no of elements in a linked list
 * @h: the list
 *
 * Return: number of elementsin list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
