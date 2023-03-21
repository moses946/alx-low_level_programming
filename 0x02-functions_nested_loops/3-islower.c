#include "main.h"

/**
  * _islower - Checks if the character is lowercase
  * @c: Character to be evaluated
  * Return: Return 1 if lowercase else 0
  */
int _islower(int c)
{
	char k;
	int i;

	i = 0;
	for (k = 'a'; k <= 'z'; k++)
	{
		if ( c == k)
		i = 1;
	}
	return (i);
}
