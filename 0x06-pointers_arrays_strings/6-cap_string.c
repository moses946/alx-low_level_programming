#include "main.h"
/**
  * cap_string - capitalizes all words of a string
  * @str: string to be capitalized
  * Return: Fixed string
  */
int checker(int a)
{
	int i;
	int b[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	
	i = 0;
	for (i = 0; i < 13; i++)
	{
		if (b[i] == a)
		{
			return (1);
		}
	}
	return (0);
}

char *cap_string(char *str)
{
	int a;
	int b;
	char c;
	int i;

	i = 0;
	while (str[i])
	{
		a = str[i];
		b = str[i + 1];
		if (checker(a))
		{
			if (b >= 97 && b <= 122)
			{
				b -= 32;
			}
			c = b;
			str[i + 1] = c;
		}
		i++;
	}
	return (str);
}
