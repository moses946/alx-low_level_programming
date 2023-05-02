#include <stdio.h>
/**
 * print_before - Prints a statement before main is executed
 */
void p_bef(void) __attribute__((constructor));
void p_bef(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
