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
	return (i);
}
/**
  * string_nconcat - concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: no of chars in string 2 to use
  * Return: NULL if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j;

	str = malloc(_strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
	{
		while (s1 == NULL)
		{
			str[i] = "";
			break;
		}
		str[i] = s1[i];
	}
	for (i += 1, j = 0; j < n; i++, j++)
	{
		while (s2 == NULL)
		{
			str[i] = "";
			break;
		}
		str[i] = s2[j];
	}
	str[i + 1] = '\0';
	return (str);
}
