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
  * argstostr - Concatenates all arguments of your program
  * @ac: Number of arguments
  * @av: Argument vector
  *
  * Return: Pointer to a new string or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, prev, curr;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	prev = _strlen(av[i]);
	str = malloc((sizeof(char) * prev) + 1);
	if (str == NULL)
		return (NULL);
	str = _strdup(av[i]);
	while (i < ac)
	{
		curr = _strlen(av[i]);
		str = realloc(str, ((curr * sizeof(char)) + 1));
		if (str == NULL)
			return (NULL);
		str[++prev] = _strdup(av[i]);
		prev += curr;
		i++;
	}
	str[++prev] = '\0';
	return (str);
}

