#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - Allocates memory for an array of n members of size bytes each
  * @nmemb: Number of elements
  * @size: Size of each element
  *
  * Return: Pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *char_array;
	int *int_array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	if (size == 1)
	{
		char_array = array;
		for (i = 0; i < nmemb; i++)
			char_array[i] = 0;
	}
	else if (size == 4)
	{
		int_array = array;
		for (i = 0; i < nmemb; i++)
			int_array[i] = 0;
	}
	return (array);
}

