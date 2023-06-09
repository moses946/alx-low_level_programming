#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * _puts - prints a string
  * @str: string to be printed
  */
void _puts(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
  * print_number - Prints an integer using _putchar
  * @n: Integer to be printed
  *
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
  * print_numbers - prints numbers followed by a new line
  * @separator: character to separate the numbers
  * @n: number of integers passed to the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	
	va_start(ptr, n);

	if (n < 1)
	{
		_putchar(' ');
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
		{
			print_number(va_arg(ptr, int));
			_puts(separator);
		}
		else
		{
			print_number(va_arg(ptr, int));
		}
	}
	print_number(va_arg(ptr, int));
	_putchar('\n');
}
