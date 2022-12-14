#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints a tabular multiplications table from 0 to 9,
 * comma separated
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (b != 0)
					_putchar(' ');
				_putchar(c + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
