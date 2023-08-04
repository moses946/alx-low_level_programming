#include "main.h"
/**
  * _isdigit - checks if c is a digit
  * @c: character to be tested
  * Description - Checks for digits 0-9
  * Return: 1 if c is a digit else 0
  */
int _isdigit(int c)
{
	int i;

	i = 0;
	if (c  => 48 && c <= 57)
		i = 1;
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(i + '0');

	return (i);
}
