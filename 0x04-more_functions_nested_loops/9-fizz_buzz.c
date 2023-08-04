#include <stdio.h>
/**
  * main - Entry point
  * Description - Prints numbers 1-100 but replaces multiples of 3 with fizz and multiples of 5 with buzz 
  * Return: Always 0(success)
  */
int main(void)
{
	int i;

	for (i  = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ",i);
	}
	putchar('\n');
	return (0);
}
