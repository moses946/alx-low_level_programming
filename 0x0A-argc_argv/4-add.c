#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  * @argc: Number of arguments
  * @argv: Argument vector
  *
  * Return: 0
  */
int main(int argc, char argv[])
{
	int add = 0, i = 1;

	if (argc < 1)
	{
		printf("0\n");
		return;
	}
	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
