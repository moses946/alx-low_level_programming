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
	char c;
	int i, k = 0;
	float f;
	char *s;

	va_start(args, format);
	while (format[k])
	{
		if (format[k] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[k] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (format[k] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[k] == 's')
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
		k++;
		if (format[k])
		{
			printf(", ");
		}
	}
	printf('\n');
	va_end(args);
}
