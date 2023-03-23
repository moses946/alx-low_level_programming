#include "main.h"
/**
  * _isupper - Checks if character is uppercase
  * @c: character to be tested
  * Description - Checks for uppercase character
  * Return: 1 if c is uppercase else 0
  */
int _isupper(int c)
{
	int i;

	i = 0;
	if (c => 65 && c <= 90)
	{
		i = 1;
	}
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(i + '0');

	return (i);
}
