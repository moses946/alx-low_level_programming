#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - Allocates memory for an array
  * @nmemb: Number of array elements
  * @size: Size of each element
  * Return: Pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
