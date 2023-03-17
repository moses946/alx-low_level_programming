#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  * Description - Print the alphabet in lowercase
  * Return: Always 0 (success)
  */

int main(void)
{
	char alphabet[27];
	int i;

	strcpy(alphabet, "abcdefghijklmnopqrstuvwxyz");
	for (i = 0; i <= 27; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
