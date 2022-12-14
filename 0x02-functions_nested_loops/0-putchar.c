#include <stdio.h>
#include "main.h"

/**
 * main - Prints putchar with _putchar
 *
 * Return: 0
 */

int main(void)
{
	char out[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(out[i]);
	}

	_putchar('\n');

	return (0);
}
