#include "main.h"
/**
  * swap_int - swaps value of two integers
  * @a: first int
  * @b: second int
  */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
