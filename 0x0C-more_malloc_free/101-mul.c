#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _atoi - Converts string to int
  * @str: String to be converted
  *
  * Return: New int value or NULL if error
  */
int _atoi(char *str)
{
	int result = 0;

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		else
		{
			return ('\0');
		}
	}
	return (result);
}
/**
  * print_int - Prints a long integer
  * @i: Interger to be printed
  */
void print_int(int i)
{
	if (i != 0)
	{
		print_int(i / 10);
		_putchar((i % 10) + '0');
	}
}
/**
  * _puts - Prints a string
  * @str: String to be printed
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
  * main - Entry point
  * @argc: Argument Count
  * @argv: Argument Vector
  *
  * Return: 0 if success or exit with code 98 on error
  */
int main(int argc, char **argv)
{
	int val1, val2, mul;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	val1 = _atoi(argv[1]);
	val2 = _atoi(argv[2]);
	if (val1 == '\0' || val2 == '\0')
	{
		_puts("Error");
		exit(98);
	}
	mul = val1 * val2;
	print_int(mul);
	return (0);
}
