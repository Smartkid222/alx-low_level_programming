#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: function of the list
 * @n: new node
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));

	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = *head;
	*head = s;
	return (s);
}
