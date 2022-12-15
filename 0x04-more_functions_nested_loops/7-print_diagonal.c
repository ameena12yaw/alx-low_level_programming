#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times diagonal line is drawn.
 * Return: no return.
 */

void print_diagonal(int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (b < (n - 1))
			_putchar('\r');
	}
	_putchar('\n');
}
