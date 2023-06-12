#include "main.h"
#include <stdlib.h>
/**
  * create_array - Creates an array and initializes it with a specific char
  * @size: Size of the array
  * @c: Character to be initialized
  *
  * Return: Pointer to the array or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
