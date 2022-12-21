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

	/* Loop through the string array till get last index */
	while (str[len] != '\0')
		len++;

	/**
	 * Check if length is odd, print half minus middle character
	 * If not, print characters from halfway through the string
	 */
	 if (len % 2 == 0)
		 for (i = len / 2; i < len; i++)
		 {
			 _putchar(str[i]);
		 }
	 else
		 for (i = (len + 1) / 2; i < len; i++)
                 {
                         _putchar(str[i]);
                 }

	/* Print new line */
	_putchar('\n');
}
