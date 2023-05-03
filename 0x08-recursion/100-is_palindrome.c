#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string under consideration
 *
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks if string is palindrome
 * @s: String to be checked
 * @len: length of string
 *
 * Return: 1 if string is a palindrome or 0 if not
 */
int check_palindrome(char *s, int len)
{
	if (len == 1 || len == 0)
		return (1);
	if (*s == s[len - 1])
	{
		return (check_palindrome(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string under consideration
 *
 * Return: 1 if string is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len));
}
