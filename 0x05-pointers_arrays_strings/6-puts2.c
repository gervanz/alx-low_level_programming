#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting from the first string
 *
 * @str: String Array
 *
 * Return: Void
 */

void puts2(char *str)
{
	/* Initialise variable for index looping */
	int len = 0, i;

	/* Loop through the string array till get last index */
	while (str[len] != '\0')
		len++;

	/* Print every 2-index characters */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	/* Print new line */
	_putchar('\n');
}
