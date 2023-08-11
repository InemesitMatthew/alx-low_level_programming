#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase,
 *              followed by a new line using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	digit = 'a';

	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
