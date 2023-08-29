#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: function of the list
 * @idx: new node
 * @n: a given position
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t;
	listint_t *s;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		t = *head;

		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
		if (t == NULL)
			return (NULL);
	}
	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	if (idx == 0)
	{
		s->next = *head;
		*head = s;
		return (s);
	}
	s->next = t->next;
	t->next = s;
	return (s);
}
