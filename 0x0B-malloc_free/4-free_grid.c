#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free two dimensional array
 * @grid: two dimensional grid
 * @height: height dimension of grid
 * Description: free memory of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}


