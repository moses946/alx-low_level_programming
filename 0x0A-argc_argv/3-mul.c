#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _atoi - Converts string to int
  * @str: String to be converted
  *
  * Return: New int value or NULL if error
  */
int _atoi(char *str)
{
	int result = 0;

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		else
		{
			return (NULL);
		}
	}
	return (result);
}
/**
  * main - Entry point
  * @argc: Number of arguments
  * @argv: Argument Vector
  *
  * Return: 0 if success and 1 if error
  */
int main(int argc, char **argv)
{
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	ans = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", ans);
	return (0);
}
