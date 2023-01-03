#include <stdio.h>
#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 *
 * @s: Double pointer to a string
 * @to: Pointer to the string to set s to
 *
 * Return: Description of the returned value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
