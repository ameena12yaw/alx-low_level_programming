#include <stdio.h>

/**
 * main - prints alpha in lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hi;

	for (hi = 'a'; hi <= 'z'; hi++)
	{
		if (hi != 'q' && hi != 'e')
			putchar(hi);
	}

	putchar('\n');

	return (0);
}
