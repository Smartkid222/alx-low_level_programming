#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Main Function
 * @nmemb: input 1
 * @size: input 2
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (k = 0; k < (nmemb * size); k++)
		s[k] = 0;
	return (s);
}
