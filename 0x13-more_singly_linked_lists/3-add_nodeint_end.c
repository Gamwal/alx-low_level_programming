#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds new node at end of linked list
 * @head: the head of the linked list
 * @n: integer to be inserted
 *
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}
	return (*head);
}
