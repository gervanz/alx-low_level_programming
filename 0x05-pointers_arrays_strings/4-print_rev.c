#include <stdio.h>
#include "main.h"

/**
 * print_rev - Print a string in reverse
 *
 * @s: String array
 *
 * Return: Void
 */

void print_rev(char *s)
{
	/* Initialise variable to loop string index */
	int len = 0;

	/* Loop through string array to last index*/
	while (s[len] != '\0')
		len++;

	/* Print string from highest index, decreasing index value */
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
