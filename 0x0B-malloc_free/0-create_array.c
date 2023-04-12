#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * create_array - creates an array of characters
  * @size: size of the array
  * @c: character to initialize with
  * Return: NULL if size is 0 or it fails and pointer to the array if success
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
