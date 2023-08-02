#include "main.h"
#include <stdio.h>

int _sqrt(int n, int s);

/**
 * _sqrt_recursion - function for the natural square root of a number
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function that calculate the natural square root of a number
 * @n: number
 * @s: integer
 * Return: 0
 */
int _sqrt(int n, int s)
{
	int sqrt = s * s;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (s);
	return (_sqrt(n, s + 1));
}
