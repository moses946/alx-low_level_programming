#include "main.h"
/**
  * _strpbrk - searches a string for any set of bytes
  * @s: main string
  * @accept: set of bytes
  * Return: pointer to bytes in s that matches accept
  */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
