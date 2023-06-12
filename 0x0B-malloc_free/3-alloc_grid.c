#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - Creates a 2D array of integers
  * @width: Width of array
  * @height: Height of array
  *
  * Return: Pointer to the array or NULL
  */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width < 1 || height  < 1)
		return (NULL);
	array = (int **)malloc(sizeof(int*) * width);
	for (i = 0; i < width; i++)
		array[i] = (int *)malloc(height * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
