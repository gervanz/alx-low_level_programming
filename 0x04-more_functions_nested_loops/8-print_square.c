#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints square, of length size #s
 *
 * @size: length per  #
 *
 * Return: Void
 */

void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');

		_putchar('\n');
	}
}
