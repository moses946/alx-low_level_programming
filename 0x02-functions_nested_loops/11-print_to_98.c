#include "main.h"
/**
  * print_to_98 - Prints numbers from n to 98
  * @n: Initial integer
  * Return: Void
  */
void print_to_98(int n)
{
	char c;

	if (n == 98)
	{
		c = n + '0';
		_putchar(c);
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			c = n + '0';
			_putchar(c);
			_putchar(',');
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			c = n + '0';
			_putchar(c);
			_putchar(',');
		}
	}
}
