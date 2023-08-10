#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Function
 * @min: input 1
 * @max: input 2
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *k;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	k = malloc(sizeof(int) * j);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		k[i] = min;
	}
	return (k);
}
