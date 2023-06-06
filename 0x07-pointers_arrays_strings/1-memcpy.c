#include "main.h"
/**
  * _memcpy - copies n bytes from memory area to dest 
  * @src: source memory area
  * @dest: destination memory area
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start;

	start = dest;
	while (n--)
	{
		*dest++ = *src++;
	}
	return (start);
}
