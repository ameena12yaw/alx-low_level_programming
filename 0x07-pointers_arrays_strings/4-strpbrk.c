#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - prints the consecutive characters
 * @s: source string
 * @accept: searching string
 *Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int w, u;

	for (u = 0; *(s + w); w++)
	{
		for (u = 0; *(accept + u); u++)
		{
			if (*(s + w) == *(accept + u))
			{
				break;
			}
		}
		if (*(accept + u) != '\0')
		{
			return (s + w);
		}
	}
	return (0);
}

