#include "main.h"
/**
  * puts2 - Prints every other character of a string
  * @str: string under evaluation
  */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{}
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		_putchar(str[j]);
	}
	_putchar('\n');
}
