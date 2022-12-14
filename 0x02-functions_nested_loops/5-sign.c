#include <stdio.h>
#include "main.h"

/**
 * print_sign - Function to check and print the sign of a number
 *
 * @n: parameter(number) to be checked
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	int dir;

	if (n == 0)
	{
		dir = 1;
		_putchar('0');
	}
	else if (n > 0)
	{
		dir = 0;
		_putchar('+');
	}
	else
	{
		dir = -1;
		_putchar('-');
	}

	return (dir);
}
