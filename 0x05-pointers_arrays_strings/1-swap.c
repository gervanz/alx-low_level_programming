#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap value of two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	/* Initialise placeholder variable */
	int x;

	/**
	 * Move value to placeholder, move second value to first variable,
	 * then move placeholder value to second variable
	 * */
	x = *a;
	*a = *b;
	*b = x;
}
