#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry Point
  * @argc: Number of arguments
  * @argv: Argument vector
  *
  * Return: 0
  */
int main(int argc, char **argv)
{
	int coins = 0, rem = 0, i = 0;
	int value[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	rem = atoi(argv[1]);
	if (rem < 0)
	{
		printf("0\n");
		return (0);
	}
	while (rem != 0)
	{
		coins += rem / value[i];
		rem = rem % value[i];
		i++;
	}
	printf("%d\n", coins);
	return (0);
}

