#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - returns a pointer to the allocated memory
  * @b: size of memory to be allocated
  * Return: pointer to allocated memory or exit with code 98 or faliure
  */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
