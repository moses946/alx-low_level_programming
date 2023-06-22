#include <stdarg.c>
#include "variadic_functions.h"
/**
  * print_numbers - Prints numbers followed by a new line
  * @separator: String btw numbers
  * @n: Number of arguments
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n - 1)
	{
		printf("%d", va_arg(ap, int));
		if (separator != '\0')
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
