#include "main.h"
/**
  * print_to_98 - Prints numbers from n to 98
  * @n: Initial integer
  * Return: Void
  */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n);
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n);
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n);
		}
	}
}
