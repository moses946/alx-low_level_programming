#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - Frees a 2D array
  * @grid: Array to be freed
  * @height: Height of the array
  *
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
