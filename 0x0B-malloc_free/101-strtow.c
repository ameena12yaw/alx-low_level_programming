#include <stdlib.h>
#include <stdio.h>

/**
 * wordnos - counts number of words in a string
 * @s: string
 * Return: Always 0 (Success)
 */

int wordnos(char *s)
{
	int str, a, b;

	str = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			str = 0;
		else if (str == 0)
		{
			str = 1;
			b++;
		}
	}
	return (b);
}
