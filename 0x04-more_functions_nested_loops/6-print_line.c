#include "main.h"
/**
  * print_line - prints a line as output
  * @n: number of _ to print
  */
void print_line(int n)
{
	int i;

	if (n => 1)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
