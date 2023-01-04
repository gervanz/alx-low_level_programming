#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the value of first argument raised to the
 * power of the second
 *
 * @x: Number to be raised
 * @y: Number to raise by
 *
 * Return: x**y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x *= _pow_recursion(x, (y - 1)));
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (-1);
}
