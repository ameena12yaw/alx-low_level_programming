#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pojnter to string
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putschar('\n');
		return;
	}
	_putschar(*s);
	_puts_recursion(s + 1);
