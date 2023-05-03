#include "main.h"
#include <stdio.h>
/**
 * _sqrt - Calculates the square root of a number
 * @n: The number under consideration
 * @i: A natural number input
 *
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number under consideration
 *
 * Return: The square root or -1 if it doesnt
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 1));
}
