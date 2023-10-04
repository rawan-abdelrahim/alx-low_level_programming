#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional
 * grid previously created alloc_grid function
 * @grid: is 2 dimensional array
 * @height: is a height of 2 dimensional array
 * Return: NULL on failure.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
