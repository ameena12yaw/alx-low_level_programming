#include "main.h"

/**
 * _strspn - prints the consecutive caracter 
 * @s: source of string
 * @accept: searching string
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, c;

	for (c = 0; *(s + c); c++)
	{
		for (a = 0; *(accept = a); a++)
		{
			if (*(s + c) == *(accept + a))
				break;
		}
	if (*(accept + a) == '\0')
		break;
	}

	return (c);
}
