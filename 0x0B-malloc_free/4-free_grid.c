#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees memory
 * @grid: pointer to  grid int
 * @height: int
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
