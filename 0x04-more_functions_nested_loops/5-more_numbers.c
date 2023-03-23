#include "main.h"
/**
  * more_numbers - Prints 10 times numbers from 0-14
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= 57; j++)
			_putchar(j);
		for (j = 48; j <= 57; j++)
		{
			_putchar('1');
			_putchar(j);
		}
		_putchar('\n');
	}
}
