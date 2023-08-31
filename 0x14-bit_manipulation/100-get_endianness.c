#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Gets the endianness of a machine
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int i;
	char *x;

	x = (char *)&i;
	return (*x + 48);
}
