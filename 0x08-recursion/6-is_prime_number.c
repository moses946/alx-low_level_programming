#include "main.h"
#include <stdio.h>
/**
 * check_prime - checks if a number is prime
 * @n: Number under consideration
 * @i: Divisor
 *
 * Return: 1 if prime or 0 if composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % i == 0 &&  i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - Checks for prime numbers
 * @n: Number to be checked
 *
 * Return: Integer value 0(False) or 1(True)
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
