#include "main.h"
/**
  * print_diagonal - Prints a diagonal on the terminal
  * @n: number of \ to be printed
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n => 1)
	{
		for (i = 1; i <= n; i++)
		{
			if (n > 1)
			{
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
		}
	}
	_putchar('\n');
}
