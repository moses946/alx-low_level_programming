#include <stdio.h>
#include <stdarg.h>
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

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s ", va_arg(ptr, int), separator);
		}
		else
		{
			printf("%d ", va_arg(ptr, int));
		}
	}
	printf("%d\n", va_arg(ptr, int));
}
