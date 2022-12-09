#include <stdio.h>

/**
 * main - different combinationsp of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ft = '0';
	int sd = '0';
	int td = '0';

	for (td = '0'; td <= '9'; td++)
	{
		for (sd = '0'; sd <= '9'; sd++)
		{
			for (ft = '0'; ft <= '9'; ft++)
			{
				if (!((ft == sd) || (sd == td) || (sd > ft) || (td > sd)))
				{
					putchar(td);
					putchar(sd);
					putchar(ft);

					if (!(ft == '9' && td == '7' && sd == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
