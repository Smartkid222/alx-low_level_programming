#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the minimum number
 * @argc: number 1
 * @argv: number 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);

	while (i > 0)
	{
		j++;
		if ((i - 25) >= 0)
		{
			i -= 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i -= 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i -= 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i -= 2;
			continue;
		}
		i--;
	}
	printf("%d\n", j);
	return (0);
}
