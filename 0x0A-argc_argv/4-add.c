#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: number 1
 * @argv: number 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int n, sum  = 0;
	char *j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = argv[i];

			for (n = 0; n < strlen(j); n++)
			{
				if (j[n] < 48 || j[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(j);
			j++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
