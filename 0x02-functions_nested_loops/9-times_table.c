#include "main.h"
/**
  * times_table - Prints the times table from 0 - 9
  * Return: No return value
  */
void times_table(void)
{
	int i;
	int j;
	int k;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			c = k + '0';
			_putchar(c);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

