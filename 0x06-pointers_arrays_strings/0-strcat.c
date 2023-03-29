#include "main.h"
#include <stdio.h>
/**
  * _strcat - concatenates two strings
  * @dest: Destination string
  * @src: Source string
  * Return: Concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
