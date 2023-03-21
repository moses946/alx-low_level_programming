#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  * @c - number under evaluation
  * Return: last digit of a number
  */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
		last  = last * -1;
	return (last);
}
