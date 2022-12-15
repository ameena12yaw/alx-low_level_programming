#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square.
 * Return: no return.
 */

void print_square(int size)
{
	int c, d;

	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar(35);
		}
		if (c != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
