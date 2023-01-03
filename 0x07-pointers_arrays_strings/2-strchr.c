#include "main.h"

/**
 * _strchr - characters in a string
 * @s: string
 * @c: characters to search
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
