#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stdio.h>
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif/*FUNCTION_POINTERS*/
