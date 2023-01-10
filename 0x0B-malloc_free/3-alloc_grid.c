#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creats a matrix using malloc
 * @width: width of matrix
 * @height: height of matrix
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int c, d, a, b;
	int **p;

	if (width <= 0 || height < 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));

		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (c = 0; c < height; c++)
		{
			p[c] = (int *) malloc(width * sizeof(int));
			if (!p[c])
			{
				for (d = 0; d <= c; d++)
					free(p[d]);
				free(p);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				p[a][b] = 0;
			}
		}
		return (p);
	}
}
