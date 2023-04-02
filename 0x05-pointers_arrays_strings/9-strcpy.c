#include "main.h"
/**
  * _strcpy - copies source string to dest string
  * @dest: Destination
  * @src: source
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] == '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
