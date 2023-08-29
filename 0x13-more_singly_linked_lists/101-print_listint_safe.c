#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * t - listint_t linked list
 * @l: function of the list
 * @s: linked list
 * @c: new list
 * Return: 0
 */

const listint_t **t(const listint_t **l, size_t s, const listint_t *c)
{
	const listint_t **k;
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
 * print_listint_safe - function that prints a list
 * @head: function of the list
 * Return: 0
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	size_t n = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (n);
			}
		}
		n++;
		l = t(l, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (n);
}
