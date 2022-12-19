#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: input
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	char st = s[0];
	int v = 0;
	int i;

	while (s[v] != '\0')
		v++;
	for (i = 0; i < v; i++)
	{
		v--;
		st = s[i];
		s[i] = s[v];
		s[v] = st;
	}
}
