#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: String Array
 *
 * Return: Void
 */

void _puts(char *str)
{
	/* Initialise variable for index looping */
	int i = 0;

	/* Loop through the string array till the end */
	while (str[i] != '\0')
	{
		/* Output each character and increment index*/
		_putchar(str[i]);
		i++;
	}

	/* Print new line */
	_putchar('\n');
}
