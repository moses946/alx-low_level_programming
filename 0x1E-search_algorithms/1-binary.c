#include <stdio.h>
#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of integers
  *
  * @array: Pointer to the first element of array to search in
  * @size: Number of elements in the array
  * @value: Value to search for
  *
  * Return: (On success) Index where value is located
  *	    (On faliure) -1 if value is not present in array
  */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return -1;
	return searcher(array, 0, size - 1, value);
}

/**
  * searcher - Uses Binary search algorithm recursively.
  *
  * @array: Array to search
  * @lo: lowest index
  * @hi: highest index
  * @val: Value to search for
  *
  * Return: Index where value is located or -1 on faliure
  */
int searcher(int *array, int lo, int hi, int val)
{
	int mid = (lo + hi) / 2;
	if (!array)
		return -1;
	if (array[mid] == val)
		return mid;
	else if (array[mid] < val)
		searcher(array, middle + 1, hi, val);
	else if (array[mid] > val)
		searcher(array, lo, middle - 1, val)
	else
		return -1;
}
