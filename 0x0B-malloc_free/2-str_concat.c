#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get input and add together for size
 * @s1: input 1
 * @s2: input 2
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *smart;
	int i;
	int s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = s = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[s] != '\0')
		s++;
	smart = malloc(sizeof(char) * (i + s + 1));
	if (smart == NULL)
		return (NULL);
	i = s = 0;
	while (s1[i] != '\0')
	{
		smart[i] = s1[i];
		i++;
	}
	while (s2[s] != '\0')
	{
		smart[i] = s2[s];
		i++, s++;
	}
	smart[i] = '\0';
	return (smart);
}
