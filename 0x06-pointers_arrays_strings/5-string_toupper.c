#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Changes lowercase to uppercase
 *
 * @str: String to be re-cased
 *
 * Return: String in uppercase
 */

char *string_toupper(char *str)
{
	char *up = str;
	int i = 0;

	while (up[i])
	{
		if (up[i] >= 'a' && up[i] <= 'z')
		{
			up[i] -= 32;
		}

		i++;
	}

	return (up);
}
