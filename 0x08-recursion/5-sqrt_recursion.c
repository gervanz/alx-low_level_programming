#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns natural square root
 *
 * @n: Number to be square-rooted
 *
 * Return: Natural square root, -1 if none
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (n);
	return (_sqrt(i, n));
}

/**
 * _sqrt - Increments i up to n/2 till square root is found
 *
 * @i: increasing number
 * @n: square number
 *
 * Return: Natural square root. -1 if none
 */

int _sqrt(int i, int n)
{
	if (i > (n / 2))
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}
