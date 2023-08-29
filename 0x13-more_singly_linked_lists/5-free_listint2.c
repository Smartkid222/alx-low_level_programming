#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: function of the list
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;
	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}
	head = NULL;
}
