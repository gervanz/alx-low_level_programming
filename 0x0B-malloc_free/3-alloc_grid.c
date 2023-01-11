#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: 2D integer array, NULL if unsuccessful
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i = 0, j = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	matrix = (int **) malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (; i < height; i++)
	{
		matrix[i] = (int *) malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			free(matrix[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;

	return (matrix);
}
