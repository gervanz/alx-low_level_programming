#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees 2D integer grid from 3-alloc_grid.c
 *
 * @grid: Memory space to free
 * @height: Height of the grid
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
