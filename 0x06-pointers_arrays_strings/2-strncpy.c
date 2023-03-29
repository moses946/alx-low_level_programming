#include "main.h"
/**
  * _strncpy - copies a string
  * @dest: destination string
  * @src: source string
  * @n: number of characters
  * Return: Dest string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
