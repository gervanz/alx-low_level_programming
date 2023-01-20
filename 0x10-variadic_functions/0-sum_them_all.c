#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sum all arguments
 *
 * @n: Number of arguments
 * @...: *args
 *
 * Return: Sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start (ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	
	return sum;
}
