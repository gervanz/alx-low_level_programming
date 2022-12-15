#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Print a right-angled isoceles triangle,
 * right-angled to the right
 *
 * @size: Length of sides, per #
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = (size - 1); j > i; j--)
				putchar(' ');

			for (j = 0; j <= i; j++)
				putchar('#');

			putchar('\n');
		}
	}

	else
		_putchar('\n');
}
