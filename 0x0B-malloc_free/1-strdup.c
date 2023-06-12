#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strlen - Returns the length of a string
  * @str: String
  *
  * Return: Length of string given in parameters
  */
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/**
  * _strdup - Duplicates a string
  * @str: String to be duplicated
  *
  * Return: Pointer to a space in memory containing copy of a string or NULL
  */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new_str = malloc((sizeof(char) * _strlen(str)) + 1);
	if (new_str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		new_str[i] = *str;
		i++;
		str++;
	}
	new_str[i] = '\0';
	return (new_str);
}
