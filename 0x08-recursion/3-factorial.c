#include <stdio.h>
#include "main.h"

/**
 * factorial - returns factorial of given number
 *
 * @n: Input number
 *
 * Return: Factorial of n, 1 if n is 0 and -1 if n < 0
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
