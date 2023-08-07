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
	unsigned int i;

	array = (char *) malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
