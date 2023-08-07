#include <stdlib.h>
#include "main.h"

/**
* count_word - function that count the number of words in a string
* @s: string to evaluate
* Return: number of words
*/

int count_word(char *s)
{
	int smart = 0;
	int c;
	int k = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			smart = 0;
		else if (smart == 0)
		{
			smart = 1;
			k++;
		}
	}
	return (k);
}

/**
 * **strtow - splits a string
 * @str: string to split
 * Return: pointer
 */

char **strtow(char *str)
{
	char **matrix;
	char *tmp;

	int i;
	int j = 0;
	int len = 0;
	int w;
	int x = 0;
	int a;
	int z;

	while (*(str + len))
		len++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (w + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				z = i;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (a < z)
					*tmp++ = str[a++];
				*tmp = '\0';
				matrix[j] = tmp - x;
				j++;
				x = 0;
			}
		}
		else if (x++ == 0)
			a = i;
	}
	matrix[j] = NULL;
	return (matrix);
}
