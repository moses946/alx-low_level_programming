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
  * str_concat - concatenates two strings
  * @s1:First string
  * @s2: Second string
  * Return: NULL on faliure or a pointer to anewly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j, len1, len2;

	while (!s1){
    	len1 = 1;
  	break;
  	}
  	while (!s2){
    	len2 = 1;
    	break;
  	}
  	while (s1){
    	len1 = _strlen(s1);
    	break;
  	}
  	while (s2){
    	len2 = _strlen(s2);
    	break;
  	}
	con = malloc(len1 + len2 + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		while (s1 == NULL)
		{
			con[i] = 32;
			break;
		}
		while (s1)
		{
			con[i] = s1[i];
			break;
		}
	}
	for (j = 0; j < len2; i++, j++)
	{
		while (s2 == NULL)
		{
			con[i] = 32;
			break;
		}
		while (s2)
		{
			con[i] = s2[j];
			break;
		}
	}
	con[i + 1] = '\0';
	return (con);
}
