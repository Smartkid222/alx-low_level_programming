#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: function of the list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *s;

	while ((s = head) != NULL)
	{
		head = head->next;
		free(s->str);
		free(s);
	}
}
