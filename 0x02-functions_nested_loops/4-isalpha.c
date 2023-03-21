#include "main.h"
/**
  * _isalpaha - Checks for alphabetic characters
  * @c: Character to be evaluated
  * Return: 1 if its a letter and 0 if not
  */
int _isalpha(int c)
{
	char a;
	char b;
	int i;

	i = 0;
	for (a = 'a', b = 'A'; a <= 'z', b <= 'Z'; a++, b++)
	{
		if ( c == a || c == b)
		{
			i = 1;
		}
	}
}
