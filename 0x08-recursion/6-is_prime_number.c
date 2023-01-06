#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Checks if prime number
 * @n: Number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
        {
                if (n == 2)
                        return (1);
                return (0);
        }

	return (_divisible(n, i + 1));
}

/**
 * _divisible - Recursive check for pure divisibility
 * @n: Number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int _divisible(int n, int i)
{
	if ((n % i) == 0)
		return (0);
	
	if (i > (n / 2))
		return (1);
	
	return (_divisible(n, i + 1));
}
