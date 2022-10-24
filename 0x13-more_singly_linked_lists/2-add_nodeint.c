#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the start
 * @head: pointer to head of linked list
 * @n: the integer to be added
 *
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (temp);
}
