#include "main.h"
/**
  * _pow_recursion - Returns the value of a number raised to a certain power
  * @x: Number being multiplied
  * @y: The power
  *
  * Return: The power or -1 
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

