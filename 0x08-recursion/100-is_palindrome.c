#include "main.h"

/**
 * _length - checks the length of a string
 * @s: string
 * Return: Always 0 (Success)
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * check_pal - checks if string is palindrome
 * @index: the index
 * @len_str: length of string
 * @s: string
 * Return: 1 if string is palindrome or 0 if not
 */

int check_pal(int index, int len_str, char *s)
{
	if (len_str > 0)
	{
		if (s[index] == s[len_str])
		{
			return (check_pal(index + 1, len_str - 1, s));
		}
		else if (s[index] != s[len_str])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if string is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	return (check_pal(0, _length(s) - 1, s));
}
