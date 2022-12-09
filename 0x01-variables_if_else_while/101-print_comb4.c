#include <stdio.h>

/**
 * main - different combinationsp of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit = '0';
	int second_digit = '0';
	int third_digit = '0';

	for (third_digit = '0'; third_digit <= '9'; third_digit++)
	{
		for (second_digit = '0'; second_digit <= '9'; second_digit++)
		{
			for (first_digit = '0'; first_digit <= '9'; first_digit++)
			{
				if (!((first_digit == second_digit) || (second_digit == third_digit) || (third_digit > second_digit)))
				{
					putchar(third_digit);
					putchar(second_digit);
					putchar(first_digit);

					if (!(first_digit == '9' && third_digit == '7' && second_digit == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putcar('\n');
	return (0);
}
