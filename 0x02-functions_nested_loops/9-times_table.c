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
	int l;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k  > 9)
			{
				l = k % 10;
				m = (k -l)/10;
				_putchar(m + '0');
				_putchar(l + '0');
			}
			else
				_putchar(k + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (k < 10)
					_putchar(' ');
		}
		_putchar('\n');
	}
}
