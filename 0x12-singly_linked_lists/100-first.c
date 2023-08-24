#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints word
 * Return: 0
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
