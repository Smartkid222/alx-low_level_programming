#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameter 1
 * @...: parameter 2
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int s;
	int sum = 0;

	va_start(m, n);

	for (s = 0; s < n; s++)
		sum += va_arg(m, int);
	va_end(m);
	return (sum);
}
