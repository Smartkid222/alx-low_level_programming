#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: function of the list
 * @index: index of the node
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t;
	listint_t *n;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
		return (1);
	}
	t = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (t->next == NULL)
			return (-1);
		t = t->next;
	}
	n = t->next;
	t->next = n->next;
	free(n);
	return (1);
}
