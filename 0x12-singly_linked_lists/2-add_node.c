#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: new node
 * @str: list
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	int i = 0;

	s = malloc(sizeof(list_t));

	if (s == NULL)
		return (NULL);
	while (str[i])
		i++;
	s->len = i;
	s->str = strdup(str);
	s->next = *head;
	*head = s;
	return (s);
}
