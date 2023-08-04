#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number 1
 * @argv: number 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int n = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", i * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
