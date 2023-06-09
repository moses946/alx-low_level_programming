#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  * @argc: Number of arguments
  * @argv: Argument Vector
  *
  * Return: 0 if success and 1 if error
  */
int main(int argc, char argv[])
{
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);
	return (0);
}
