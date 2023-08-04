#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: substring 1
 * @needle: substring 2
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *n = needle;

		while (*i == *n && *n != '\0')
		{
			i++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
