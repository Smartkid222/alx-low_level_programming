#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * needed to flip from one num to another.
 * @n: Number Input 1.
 * @m: Number Input 2.
 * Return: Number of flip in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0;
	unsigned int comp0;
	unsigned int comp1;

	while (!(n == 0 && m == 0))
	{
		comp0 = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp0 != comp1)
			flip += 1;
	}
	return (flip);
}
