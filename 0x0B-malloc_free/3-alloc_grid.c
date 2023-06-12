#include "./main.h"
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
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
