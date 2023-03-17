#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  * Description - Print the alphabet in lowercase
  * Return: Always 0 (success)
  */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
