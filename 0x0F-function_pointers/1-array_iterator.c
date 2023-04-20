#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - executes a function on each element of a given array
  * @array: array to be iterated
  * @size: size of the array
  * @action: function to be executed on the array items
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
