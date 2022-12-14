#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: Input string
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
