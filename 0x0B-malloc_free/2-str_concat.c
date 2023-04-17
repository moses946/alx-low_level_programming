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
	* get_len - gets length of string
	* @s: string
	* Return: len
  */
int get_len(char *s)
{
	int len;

	while (!s)
	{
		len = 1;
		break;
	}
	while (s)
	{
		len = _strlen(s);
		break;
	}
	return (len);
}
/**
  * str_concat - concatenates two strings
  * @s1:First string
  * @s2: Second string
  * Return: NULL on faliure or a pointer to anewly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j, len1, len2;

	len1 = get_len(s1);
	len2 = get_len(s2);
	con = malloc(len1 + len2 + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		while (s1 == NULL)
		{
			len1 = 0;
			break;
		}
		while (s1)
		{
			con[i] = s1[i];
			break;
		}
	}
	for (j = 0; j < len2; len1++, j++)
	{
		while (s2 == NULL)
		{
			con[len1] = '\0';
			break;
		}
		while (s2)
		{
			con[len1] = s2[j];
			break;
		}
	}
	con[len1] = '\0';
	return (con);
}