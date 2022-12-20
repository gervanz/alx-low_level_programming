#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints second half of a string,
 *
 * @str: String Array
 *
 * Return: Void
 */

void puts_half(char *str)
{
	/* Initialise variable for index looping */
	int len = 0, i;

	/* Loop through the string array till get last index
	 * if length is odd, print half minus middle character
	 */
	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		len += 1;

	/* Print characters from halfway through the string */
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	/* Print new line */
	_putchar('\n');
}
