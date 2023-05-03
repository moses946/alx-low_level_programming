#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - Prints all arguments given
  * @format: List of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;

	while (*format)
	{
		if (*format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		format++;
		if (*format)
		{
			printf(", ");
		}
	}
	printf('\n');
	va_end(args);
}
