#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Main Function
 * @ptr: input 1
 * @old_size: input 2
 * @new_size: input 3
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;
	unsigned int max = new_size;
	char *olds = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		s[i] = olds[i];
	free(ptr);
	return (s);
}
