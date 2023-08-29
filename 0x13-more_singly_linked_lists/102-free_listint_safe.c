#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * tn - listint_t linked list
 * @l: function of the list
 * @s: linked list
 * @c: new list
 * Return: 0
 */

listint_t **tn(listint_t **l, size_t s, listint_t *c)
{
	listint_t **k;
	size_t i;

	k = malloc(s * sizeof(listint_t *));

	if (k == NULL)
	{
		free(l);
		exit(98);
	}

	for (i = 0; i < s - 1; i++)
	k[i] = l[i];
	k[i] = c;
	free(l);
	return (k);
}

/**
 * free_listint_safe - function that free a list
 * @h: function of the list
 * Return: 0
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i;
	size_t n = 0;
	listint_t **l = NULL;
	listint_t *z;

	if (*h == NULL)
		return (n);
	while (*h != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (*h == l[i])
			{
				*h = NULL;
				free(l);
				return (n);
			}
		}
		n++;
		l = tn(l, n, *h);
		z = (*h)->next;
		free(*h);
		*h = z;
	}
	return (n);
}
