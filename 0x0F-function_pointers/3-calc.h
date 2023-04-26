#ifndef CALC_H
#define CALC_H
/**
  * _puts - prints a string
  * @str: string to be printed
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
  * print_number - Prints an integer using _putchar
  * @n: Integer to be printed
  *
  */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10) {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
void print_number(int n);
void _puts(char *str);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif

