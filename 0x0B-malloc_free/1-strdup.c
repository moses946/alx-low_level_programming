#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - copies a string given to it as a parameter
  * @str: string to be copied
  * Return: Pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	long unsigned int i;
	char *nstr;

	nstr = malloc(sizeof(str));
	if (str == NULL || nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(str); i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
