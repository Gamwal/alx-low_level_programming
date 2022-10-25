#include "lists.h"
#include "stdlib.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: start node of the linked list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
