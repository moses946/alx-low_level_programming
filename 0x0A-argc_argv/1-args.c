#include <stdio.h>
/**
  * main - Entry point
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	printf("%ld\n", (sizeof(argv[argc]) / 8) - 1);
	return (0);
}
