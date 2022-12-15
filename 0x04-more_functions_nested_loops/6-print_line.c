#include <stdio.h>
#include "main.h"

/**
 * print_line - Print a line
 *
 * @n: Length of line per underscore
 *
 * Return: Void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
