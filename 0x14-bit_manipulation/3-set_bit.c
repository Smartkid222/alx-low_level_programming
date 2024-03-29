#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int bit;

	if (index > 63)
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
