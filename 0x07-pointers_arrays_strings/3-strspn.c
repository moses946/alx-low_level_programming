#include "main.h"
/**
  * _strspn - gets the length of a prefixed substring
  * @s: main string
  * @accept: prefixed substring
  * Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int found;
	char *p;

	found = 1;
	count = 0;
	for (; *s; s++)
	{
		found = 0;
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return count;
}
