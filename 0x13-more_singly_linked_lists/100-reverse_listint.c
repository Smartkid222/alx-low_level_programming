#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 * @head: function of the list
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	p = NULL;
	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
