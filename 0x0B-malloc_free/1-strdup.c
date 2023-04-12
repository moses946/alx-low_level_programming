#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * _strlen - Returns length of a string
  * @s: string evaluated
  * Return: Length of string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i + 1);
}
/**
  * _strdup - copies a string given to it as a parameter
  * @str: string to be copied
  * Return: Pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	int i;
	char *nstr;
	
	if (str == NULL)
	{
		return (NULL);
	}
	nstr = malloc(_strlen(str));
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(str); i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
