#include <stdio.h>

/**
  * main - Entry point
  * Description - Print alphabet in lowercase excluding q and e
  * Return: Always 0 (success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}

