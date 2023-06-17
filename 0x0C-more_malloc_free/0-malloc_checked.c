#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - Allocates memory using malloc
  * @b: number of bytes
  *
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
