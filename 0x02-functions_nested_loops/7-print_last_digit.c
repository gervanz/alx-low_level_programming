#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: Given integer
 *
 * Return: Last digit
 */

int print_last_digit(int num)
{
	int ld;

	if (num < 0)
	{
		ld = (num % 10) * -1;
	}
	else
	{
		ld = num % 10;
	}

	_putchar(ld + '0');

	return (ld);
}
