#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
/**
  * main - Entry point
  * Description - Prints the last digit of int n
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int n;
	int j;
	char m[50];
	char l[50];
	char o[50];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	strcpy(m, "and is greater than 5");
	strcpy(l, "and is 0");
	strcpy(o, "and is less than 6 and is not 0");
	j = n % 10;
	if (j > 5)
		printf("Last digit of %d is %.0f %s\n", n, j, m);
	else if (j == 0)
		printf("Last digit of %d is %.0f %s\n", n, j, l);
	else
		printf("Last digit of %d is %.0f %s\n", n, j, o);
	return (0);
}
