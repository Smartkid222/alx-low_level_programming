#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: new node
 * @str: list
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *n;
	size_t i;

	s = malloc(sizeof(list_t));

	if (s == NULL)
		return (NULL);
	s->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	s->len = i;
	s->next = NULL;
	n = *head;
	if (n == NULL)
	{
		*head = s;
	}
	else
	{
		while (n->next != NULL)
			n = n->next;
		n->next = s;
	}
	return (*head);
}
