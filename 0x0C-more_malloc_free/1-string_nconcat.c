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
	*comp - compares two int
	* @a: First int
	* @b: Second int
	* Return: the main int
*/
void comp(unsigned int *a, unsigned int *b)
{
	while (a >= b)
	{
		a = b;
		break;
	}
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
	int i, len1;
	unsigned int j, len2;

	len1 = get_len(s1);
	len2 = get_len(s2);
	comp(&n, &len2);
	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		while (s1 == NULL)
		{
			len1 = 0;
			break;
		}
		while (s1)
		{
			str[i] = s1[i];
			break;
		}
	}
	for (j = 0; j < n; len1++, j++)
	{
		while (s2 == NULL)
		{
			str[len1] = '\0';
			break;
		}
		while (s2)
		{
			str[len1] = s2[j];
			break;
		}
	}
	str[len1] = '\0';
	return (str);
}
