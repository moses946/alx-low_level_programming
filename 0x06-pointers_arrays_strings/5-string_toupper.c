#include "main.h"
/**
  * string_toupper - converts lowercase characters to uppercase
  * @str: string input
  * Return: Changed string
  */
char *string_toupper(char *str)
{
	int a;
	int i;
	char b;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (a >= 97 || a <= 122)
		{
			a -= 32;
		}
		b  = a;
		str[i] = b;
	}
	return (str);
}
