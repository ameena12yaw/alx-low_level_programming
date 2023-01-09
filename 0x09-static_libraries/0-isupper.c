#include "main.h"
#include <stdio.h>

/**
 * _isupper - function thst checks for uppercase characters.
 * @c: chracter to be checked.
 * Return: 1 if character is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
