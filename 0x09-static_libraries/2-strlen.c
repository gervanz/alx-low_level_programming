#include <stdio.h>
#include "main.h"

/**
 * _strlen - Return the length of string
 *
 * @s: Pointer to string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	/* Initialise variable to loop through index */
	int i = 0;

	/* Loop through string array and add 1 for each character */
	while (s[i] != '\0')
		i++;

	/* Return variable with last index */
	return (i);
}
