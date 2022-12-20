#include <stdio.h>
#include "main.h"

/**
 * print_array - Print first given amount of elements from array
 *
 * @a: Array
 * @n: Amount of elements to print
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	/* Initialise variable to store length of array */
	int len;

	/* Check if n is not 0, else print nothing */
	if (n != 0)
	{
		/* Loop through array to last index (n-1), print each index value */
		for (len = 0; len < n; len++)
		{
			printf("%d", a[len]);

			/* Print comma and space after elements except last */
			if (len < (n - 1))
				printf(", ");
		}
	}

	printf("\n");
}
