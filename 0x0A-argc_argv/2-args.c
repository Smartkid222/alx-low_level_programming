#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: argument 1
 * @argv: argument 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
