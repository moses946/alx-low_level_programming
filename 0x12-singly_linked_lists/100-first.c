#include <stdio.h>
/**
 * print_before - Prints a statement before main is executed
 */
void print_before() __attribute__((constructor));
void print_before()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
