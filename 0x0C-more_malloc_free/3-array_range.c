#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * array_range - Creates an array of integers
  * @min: Minimum value
  * @max: Maximum value
  *
  * Return: Pointer to array or NULL if it fails
  */
int *array_range(int min, int max)
{
	int *array, size, i = 0;

	size = (max - min) + 1;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (i <= size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
