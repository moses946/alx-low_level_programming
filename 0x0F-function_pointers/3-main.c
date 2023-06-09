#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: Number of command line arguments
  * @argv: An array of command line arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		_puts("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		_puts("Error null\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0)
	{
		_puts("Error\n");
		exit(100);
	}

	result = op_func(a, b);

	print_number(result);

	return (0);
}
