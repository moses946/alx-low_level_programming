#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * Return: 0 if arguments passed are 2 else 1
  */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	return (0);
}
