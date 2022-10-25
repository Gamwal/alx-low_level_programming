#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head node of the linked list
 *
 * Return: head nodes data (n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->n;

	free(*head);
	return (temp);

}
