#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: element 1
 * @action: element 2
 * @size: element 3
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array == NULL || action == NULL)
		return;
	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}
