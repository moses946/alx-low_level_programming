#include <stdio.h>

int main(void)
{
	char i;
	int c;
	long l;
	long long s;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(i));
	printf("Size of an int : %zu byte(s)\n", sizeof(c));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(s));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}

