#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: area 1
 * @src: area 2
 * @n: memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
