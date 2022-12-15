#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for upper case character
 *
 * @c: Character (parameter)
 *
 * Return: 1 (Sucess), 0 (Failure)
 */

int _isupper(int c)
{
	char chr;
	int x = 0;

	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		if (chr == c)
			x = 1;
	}

	return (x);
}
