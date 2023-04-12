#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function for liberation a height of 2d array
 * @grid: 2d array
 * @height: row to liberate
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
