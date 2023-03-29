#include "main.h"
/**
  * reverse_array - reverses content of array
  * @a: the array
  * @n: number of items in the array
  */
void reverse_array(int *a, int n)
{
	int *b;
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	for (i = i, j = 0; i <= 0; j++, i--)
	{
		a[j] = b[i];
	}
}
