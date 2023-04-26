#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * sum_them_all - returns sum of all its parameters
  * @n: number of parameters
  * Return: If n == 0 return 0
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ptr;

		va_start(ptr, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ptr, int);
		}
		return (sum);
	}
}
