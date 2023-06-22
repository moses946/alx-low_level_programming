#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - Print strings followed by a new line
  * @separator: String to be printed between strings
  * @n: Number of arguments
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);
	while (i < n - 1)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL)
			printf("%s", separator);
	}
	str = va_arg(ptr, char *);
	if (str == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", str);
}
