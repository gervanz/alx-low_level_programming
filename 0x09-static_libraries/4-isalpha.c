#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if argument is an alphabet
 *
 * @c: Argument
 *
 * Return: 1 (Successful), 0(Failure)
 */

int _isalpha(int c)
{
	char lower, upper;
	int abc = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
			abc = 1;
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			abc = 1;
	}

	return (abc);
}
