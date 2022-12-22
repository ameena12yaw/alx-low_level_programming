#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string to 1337
 * @str: string to be encoded
 * Return: Always 0 (Success)
 */


char *leet(char *str)
{
	int index_1 = 0, index_2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index_1])
	{
		for (index_2 = 0; index_2 <= 7; index_2++)
		{
			if (str[index_1] == leet[index_2] || str[index_1] - 32 == leet[index_2])
				str[index_1] = index_2 + '0';
		}

		index_1++;
	}

	return (str);
}
