#include "main.h"
#include <stdio.h>
/**
 * factorial - Returns the factorial of a number
 * @n: NUmber under consideration
 *
 * Return: -1 if n is lower than 0 or the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
