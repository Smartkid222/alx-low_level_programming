#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n;

	i = 0;

	while (s[i] == accept[i] && s[i] != '\0')
	{
		i++;
	}
	n = s[i] - accept[i];
	return (n);
}
