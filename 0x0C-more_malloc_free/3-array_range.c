#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * @min: Minimum
 * @max: Maximum
 *
 * Return: Pointer to array, else NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, valdiff;

	if (min > max)
		return (NULL);

	valdiff = max - min;

	arr = malloc((valdiff + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (; i <= valdiff; i++)
		arr[i] = min++;

	return (arr);
}
