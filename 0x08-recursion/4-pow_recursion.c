#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion  - Returns the value of x raised to y
 * @x: The base
 * @y: The power
 *
 * Return: -1 if y is lower than 0 or x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
