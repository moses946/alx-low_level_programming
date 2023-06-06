#include "main.h"
/**
  * _strchr - locates a character in a string
  * @s: Main string
  * @c: character to be located
  * Return: pointer to the first occurence or null if not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

