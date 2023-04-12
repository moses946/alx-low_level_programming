#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * alloc_grid - creates a 2D array of integers
  * @width: Width of array
  * @height: Height of array
  * Return: NULL on faliure or pointer to the array
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}
	if (array == NULL)
	{
		
		for (i = 0; i < height; i++)
		{
			free(array[i]);
		}
		free(array);
		return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
