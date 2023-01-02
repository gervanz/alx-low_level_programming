#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 *
 * @a: Array to be reversed
 * @n: number of elements in array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i = 0, clip;

	while (i < n--)
	{
		clip = a[i];
		a[i++] = a[n];
		a[n] = clip;

	}
}
