#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: function to the linst
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
