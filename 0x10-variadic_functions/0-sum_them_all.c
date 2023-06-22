#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - Returns sum of all its arguments
  * @n: Number of parameters
  *
  * Return: Sum of n arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
