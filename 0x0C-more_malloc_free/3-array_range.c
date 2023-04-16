#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * array_range - creates an array of integers
  * @min: Minimum value
  * @max: Maximum value
  * Return: Array or NULL if it fails
  */
int *array_range(int min, int max)
{
	int *array, size, i;

	size = (max - min) + 1;
	if (min > max)
		return (NULL);
	array = malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	for (i = 0, i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
