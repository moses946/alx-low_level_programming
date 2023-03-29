#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: Destination string
  * @src: Source string
  * @n: number of characters from source
  * Return: Pointer to concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen;
	int j;

	j = 0;
	dlen = 0;
	while (dest[dlen])
	{
		dlen++;
	}
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
