#include <stdio.h>

/**
  * main -Entry point
  * Description - Print all possible combinations of single digit numbers
  * Return: Always 0 (success)
  */
int main(void)
{
	int i, j, k;

	for (i = 48, j = 44, k = 32; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(j);
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
