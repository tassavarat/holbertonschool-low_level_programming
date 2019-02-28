#include "holberton.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: Pointer to string
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion((s + 1)));
}
/**
 * palindrome_test - Check if palindrome
 * @s: String being evaluated
 * @len: Length of string
 * @i: Index
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_test(char *s, int len, int i)
{
	if (s[i] != s[len - i])
		return (0);
	else if (i == len / 2)
		return (1);
	return (palindrome_test(s, len, i + 1));
}
/**
 * is_palindrome - Checks if palindrome
 * @s: String being evaluated
 *
 * Return: Result from palindrome_test
 */
int is_palindrome(char *s)
{
	return (palindrome_test(s, _strlen_recursion(s) - 1, 0));
}
