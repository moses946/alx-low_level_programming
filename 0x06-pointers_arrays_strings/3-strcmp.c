#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: difference in strings
  */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;
	int i;
	int j;

	j = 0, i = 0, a = 0, b = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		a = a + s1[i];
	}
	while (s2[j])
	{
		b += s2[j];
		j++;
	}
	return (a - b);
}
