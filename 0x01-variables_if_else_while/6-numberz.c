#include <stdio.h>

/**
  * main - Entry point
  * Description - Print all single digit numbers in base 10 using getchar
  * Return: Always 0 (success)
  */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
