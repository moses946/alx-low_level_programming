#include "calc.h"
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: Number of command line arguments
  * @argv: An array of command line arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 4)
	{
		printf("Error");
		return (1);
	}
	i = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	if (i != '\0')
		printf("%d", i);
	else
		printf("Error");
	return (0);
}
