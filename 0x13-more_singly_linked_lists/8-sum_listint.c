#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the data of a linked list
 * @head: the start node of the linked list
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
