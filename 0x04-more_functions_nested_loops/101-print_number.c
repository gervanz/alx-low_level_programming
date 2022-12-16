#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: Given integer
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int num = n, i = 1000000000;

	if (n == 0)
		_putchar('0');

	else if (n > 0)
	{
		for (; i >= 1; i /= 10)
			if (num / i != 0)
			{
				_putchar((num / i) % 10 + '0');
			}
	}

	else if (n < 0)
	{
		_putchar('-');
		num = -num;
		for (; i >= 1; i /= 10)
		{
			if (num / i != 0)
				_putchar((num / i) % 10 + '0');
		}
	}

}
