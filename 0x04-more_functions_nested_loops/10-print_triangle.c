#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: number of lines.
 * Return: no return
 */

void print_triangle(int size)
{
	int p, z;

	for (p = 0; p < size; p++)
	{
		for (z = 1; z < (size - 1); z++)
			_putchar(' ');
		for (z--; z < size; z++)
			_putchar(35);
		if (p < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
