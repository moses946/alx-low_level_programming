#include <stdio.h>
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
				printf("%s%s ", "(nil)", separator);
			else
				printf("%s%s ", string, separator);
		}
		else
		{
			if (string == NULL)
				printf("%s ", "(nil)");
			else
				printf("%s ", string);
		}
	}
	string = va_arg(ptr, char*);
	if (string == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%s\n", string);
}

