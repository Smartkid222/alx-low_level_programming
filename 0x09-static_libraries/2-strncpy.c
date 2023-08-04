#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string 1
 * @src: string 2
 * @n: copied string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
