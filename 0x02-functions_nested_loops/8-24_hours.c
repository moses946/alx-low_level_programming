#include "main.h"
/**
  * jack_bauer - Prints every minute of the day
  * Return: Time in minutes
  */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
				}
			}
		}
	}
	return (0);
}

