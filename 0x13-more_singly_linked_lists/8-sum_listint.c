#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: function of the list
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
