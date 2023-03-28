#include "main.h"
/**
  * puts_half - prints half a string
  * @str: string to be halfed
  */
void puts_half(char *str)
{
	int i;
	int n;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{}
	if (i % 2 != 0)
		n = (i - 1)/2;
	else
		n = i/2;
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
