#include <sdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	print("size of a char: %zu byte(s)\n", sizeof(char));
	print("size of an int: %zu byte(s)\n", sizeof(int));
        print("size of a long int: %zu byte(s)\n", sizeof(long int));
	print("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	return (0);
}	
