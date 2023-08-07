#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: char 1
 * @c: char 2
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
		array[i] = c;
		i++;
	return (array);
}
