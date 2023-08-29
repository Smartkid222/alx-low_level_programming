#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: function of the list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *c;
	int i;

	if (*head == NULL)
		return (0);
	c = *head;
	*head = c->next;
	i = c->n;
	free(c);
	return (i);
}
