#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Function to print the alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num = 0, chr;

	while (num < 10)
	{
		chr = 'a';
		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}

		_putchar('\n');
		num++;
	}
}
