#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string 1
 * @c: string 2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (0);
}
