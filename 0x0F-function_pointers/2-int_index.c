#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: Array to search
 * @size: Size of the array
 * @cmp: Pointer to function to compare values
 *
 * Return: -1 if size<=0 or no match, otherwise index of first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((cmp == NULL) || (array == NULL))
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
