#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_strings - prints strings followed by a new line
  * @separator: char to separate the strings
  * @n: number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		string = va_arg(ptr, char*);
		if (separator != NULL)
		{
			if (string == NULL)
			{
				_puts("(nil)");
				_putchar(separator);
				_putchar(" ");
			}
			else
			{
				_puts(string);
				_putchar(separator);
				_putchar(" ");
			}
		}
		else
		{
			if (string == NULL)
			{
				_puts("(nil)");
				_putchar(" ");
			}
			else
			{
				_puts(string);
				_putchar(" ");
			}
		}
	}
	string = va_arg(ptr, char*);
	if (string == NULL)
	{
		_puts("(nil)");
		_putchar('\n');
	}
	else
	{
		_puts(string);
		_putchar('\n');
	}
}

