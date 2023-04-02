#include "main.h"
/**
  * print_rev - prints a string in reverse
  * @s: string to be reversed
  */
void rev_string(char *s)
{
	int i;
	int j;
	char *t;

	while (s[i])
	{
		i++;
	}
	for(j = 0, i = i -1; i >= 0; i--)
	{
		t[j]  = s[i];
	}
	s = t;
}
