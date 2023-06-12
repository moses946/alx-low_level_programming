#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
  * str_concat - Concatenates two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: Pointer to concatenated strings or NULL if failed
  */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new_str = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		new_str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		new_str[i] = *s2;
		i++;
		s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}

