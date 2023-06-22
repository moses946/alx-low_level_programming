#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - Adds two integers
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: Sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - Subtract two Integers
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: The difference between a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - Multiplies two integers
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: Multiplication of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - Divides two integers
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: Division of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - Returns the modulus of two integers
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: Modulus of a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
