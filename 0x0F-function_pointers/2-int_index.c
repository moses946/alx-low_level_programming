#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - searches an integer
  * @array: array of integers
  * @size: size of array
  * @cmp: function that checks for value
  * Return: Index of first element that cmp doesn't return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		while (cmp(array[i]))
			return (i);
	}
	return (-1);
}
