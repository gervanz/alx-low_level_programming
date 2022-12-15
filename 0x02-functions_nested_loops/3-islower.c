#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lower case character
 *
 * @c: Character (parameter)
 *
 * Return: 1 (Sucess), 0 (Failure)
 */

int _islower(int c)
{
	char chr;
	int x = 0;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == c)
			x = 1;
	}

	return (x);
}
