#include "main.h"
/**
  * factorial - Returns factorial of a given number
  * @n: Number undergoing calculation
  *
  * Return: Factorial or -1 if less than 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
