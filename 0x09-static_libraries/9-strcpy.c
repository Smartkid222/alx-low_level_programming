#include "main.h"
/**
 * _strcpy - function that copies the string
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	dest[s++] = '\0';
	return (dest);
}
