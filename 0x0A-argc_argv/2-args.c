#include "main.h"
#include <stdio.h>
/**
  * main - Entry Point
  * @argc: Number of arguments
  * @argv: Argument Vector
  *
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
