#include "main.h"
/**
  * print_sign - Prints the sign of a number
  * @n: The number whose sign is being evaluated
  * Return: Plus if positive or negative if negative
  */
int print_sign(int n)
{
	int c;

	if (n < 0)
	{
		c = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		c = 1;
		_putchar('+');
	}
	else
	{
		c = 0;
		_putchar('0');
	}
	return (c);
}
