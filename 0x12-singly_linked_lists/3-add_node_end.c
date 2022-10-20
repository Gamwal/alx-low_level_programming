#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds node at the beginning of a list
 * @head: pointer to list
 * @str: pointer to string
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last = *head;
	char *newstr = strdup(str);
	int i;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	if (newstr == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (i = 0; newstr[i];)
		i++;

	temp->str = newstr;
	temp->len = i;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (0);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = temp;

	return (temp);

}
