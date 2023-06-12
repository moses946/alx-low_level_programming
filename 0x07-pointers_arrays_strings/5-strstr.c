#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: Main string
  * @needle: string to be located
  * Return: Pointer to the begining of located substring or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
