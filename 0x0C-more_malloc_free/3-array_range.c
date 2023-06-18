#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - Creates an array of integers
  * @min: Minimum value
  * @max: Maximum value
  *
  * Return: Pointer to newly formed array
  */
int *array_range(int min, int max)
{
	int *array, size, counter = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (counter <= size)
	{
		array[counter] = min;
		counter++;
		min++;
	}
	return (array);
}
