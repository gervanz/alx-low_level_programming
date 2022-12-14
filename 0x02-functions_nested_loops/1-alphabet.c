#include <stdio.h>
#include "main.h"

/**
 * void - function to print the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
