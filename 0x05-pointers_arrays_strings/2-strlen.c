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
