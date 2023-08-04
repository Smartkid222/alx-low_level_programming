#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int m = 1;
	int o = 0;

	while (s[i])
		{
		if (s[i] == 45)
		{
			m *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			o = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (o == 1)
		{
			break;
		}
		i++;
	}
	n *= m;
	return (n);
}
