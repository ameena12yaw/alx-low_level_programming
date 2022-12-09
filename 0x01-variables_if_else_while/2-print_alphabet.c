#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	int cd = 'a';

	while (cd <= 'z')
	{
		putchar(cd);
		cd++;
	}
	putchar('\n');
	return (0);
}
