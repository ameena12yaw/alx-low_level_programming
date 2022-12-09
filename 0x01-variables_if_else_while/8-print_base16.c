#include <stdio.h>

/**
 * main - prints the numbers with base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;
	char alpha;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
