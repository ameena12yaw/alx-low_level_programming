#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit = '0';
	int second_digit = '0';

	for (second_digit = '0'; second_digit <= '9'; secon_digit++)
	{
		for (first_digit = '0'; first_digit = '9'; first_digit++)
		{
			if (!((first_digit == second_digit) || (second_digit > first_digit)))
			{
				putchar(second_digit);
				putchar(first_digit);

				if (!(first_digit == '9' && second_digit == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
