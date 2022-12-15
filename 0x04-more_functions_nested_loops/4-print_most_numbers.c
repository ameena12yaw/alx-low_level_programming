#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9, and new line.
 * Return: void;
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 56; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
