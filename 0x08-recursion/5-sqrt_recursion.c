#include <stdio.h>
#include "main.h"

/**
 * sqrt_recursion - Returns natural square root
 *
 * @n: Number to be square-rooted
 *
 * Return: Natural square root, -1 if none
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 1)
		return (-1);

	if (n == 1)
		return (1);

	for (; i < (n / 2); i++)
	{
		if ((i * i) == n)
			return (i);
	}

	return (-1);
}
