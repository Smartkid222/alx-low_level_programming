#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: function number 1
 * @n: function number 2
 * @...: function number 3
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int s;

	va_start(m, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(m, int));
		if (s != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
