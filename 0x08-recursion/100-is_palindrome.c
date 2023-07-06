#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s : Pointer to string.
 * Return: void (length of a string).
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * search_palindrome - Search if the string is palindrome.
 * @s : Pointer to string.
 * @len : Integer (Length of string).
 * Return: 1 if palindrome 0 if not.
 */
int search_palindrome(char *s, int len)
{
	if (*s == '\0')
		return (1);
	if (len >= len / 2)
	{
		if (*s != *(s + len - 1))
			return (0);
		s++;
		len--;
		return (search_palindrome(s, len - 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - Check if a string is palindrome.
 * @s : Pointer to string.
 * Return: 1 if palindrome 0 if not.
 */
int is_palindrome(char *s)
{
	return (search_palindrome(s, _strlen_recursion(s)));
}
