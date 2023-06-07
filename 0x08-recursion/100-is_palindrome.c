#include "main.h"
#include <stddef.h> /* For NULL */
#include <string.h> /* For strlen */

/**
 * is_palindrome_recursive - Help function to check if string is a recurse.
 * @s: The string to check.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: empty string or palindrome */
	}
	else if (s[start] != s[end])
	{
		return (0); /* Base case: not a palindrome */
	}
	else
	{
		return (is_palindrome_recursive(s, start + 1, end - 1)); /* Recurse index */
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	if (s == NULL)
		return (0); /* Null check */

	length = strlen(s);
	if (length <= 1)
		return (1); /* Base case: empty string or single character */

	return (is_palindrome_recursive(s, 0, length - 1));
}

