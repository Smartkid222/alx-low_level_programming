#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: function of the list
 * Return: 0
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t;
	listint_t *h;

	t = h = head;
	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
		{
			t = head;
			break;
		}
	}
	if (!t || !h || !h->next)
		return (NULL);
	while (t != h)
	{
		t = t->next;
		h = h->next;
	}
	return (h);
}
