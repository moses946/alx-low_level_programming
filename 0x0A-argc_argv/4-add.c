#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: number of arguments
  * @argv: argument vector
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int a, i;

	a = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				a += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", a);
	return (0);
}
