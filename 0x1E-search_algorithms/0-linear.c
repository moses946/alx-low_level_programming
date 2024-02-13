#include <stdio.h>

/**
  * linear_search: Searches for a value in an array of integers
  *
  * @array: Array of integers
  * @size: Size of the array
  * @value: Value to search for
  *
  * Return: (On Success) First Index where value is located
  *         (On Faliure) -1 if value is not present or array is null
  */
int linear_search(int *array, size_t size, int value)
{
	if (!array)
		return -1;

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array);
		if (array == value)
		{
			printf("Found %d at index: %d", value, i);
			return (i);
		}
		array++;
	}
	return -1;
}
