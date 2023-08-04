#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: parameter to checks for uppercase
 * Return: 1 if c is uppercase and if otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
