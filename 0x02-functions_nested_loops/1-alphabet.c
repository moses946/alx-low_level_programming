#include "main.h"

/**
  * Print_alphabet - Prints the alphabet in lowercase
  * Return: Void type
  */
void Print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
