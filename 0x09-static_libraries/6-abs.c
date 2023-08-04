#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @s: parameter to be checked
 *
 * Return: s
 */

int _abs(int s)
{
	if (s < 0)
		s = -(s);
	else if (s >= 0)
		s = s;
	return (s);
}
