#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int st = 0;

	while (s[st] != '\0')
		st++;
	for (st = 1 - 1; st >= 0; st--)
		_putchar(s[st]);

	_putchar('\n');
}
