#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks for numeric character
 *
 * @c: Character (parameter)
 *
 * Return: 1 (Sucess), 0 (Failure)
 */

int _isdigit(int c)
{
	char chr;
	int x = 0;

	for (chr = '0'; chr <= '9'; chr++)
	{
		if (chr == c)
			x = 1;
	}

	return (x);
}
