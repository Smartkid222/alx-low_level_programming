#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument 1
 * @argv: argument 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
