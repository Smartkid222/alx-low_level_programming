#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *smart;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	smart = malloc(sizeof(char) * (i + 1));
	if (smart == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		smart[r] = str[r];
	return (smart);
}
