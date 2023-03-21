#include "main.h"
/**
  * print_to_98 - Prints numbers from n to 98
  * @n: Initial integer
  * Return: Void
  */
void print_to_98(int n)
{
	int i;
	int j;

	if (n == 98)
	{
		i = n % 10;
		j = (n -i)/10;
		_putchar(j + '0');
		_putchar(i + '0');
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			i = n % 10;
			j = (n - i)/10;
			_putchar(j + '0');
			_putchar(i + '0');
			_putchar(',');
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			i = n % 10;
			j = (n - i)/10;
			_putchar(j +'0');
			_putchar(i + '0');
			_putchar(',');
		}
	}
}
