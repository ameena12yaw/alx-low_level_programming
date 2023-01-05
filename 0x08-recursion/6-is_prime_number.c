#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: number
 * @iterator: number to iterate
 * Return: return 1 or 0
 */

int evaluate_num(int num, int iterator)
{
	if (iterator < num)
	{
		if (num % iterator == 0)
		{
			return (0);
		}
		else
		{
			return (evaluate_num(num, iterator + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if a number is prime or not.
 * @n: number to be ckecked
 * Return: 1 if number is prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (evaluate_num(n, 2));
	}
}
