#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, i, coins[5] = {25, 10, 5, 2, 1}, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi[argv[1]];
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}

