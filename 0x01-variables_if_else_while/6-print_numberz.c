#include <stdio.h>

/**
 * main - prints all numbers of base 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf((numbers % 10) + '0');

	printf("\n");

	return (0);
}
