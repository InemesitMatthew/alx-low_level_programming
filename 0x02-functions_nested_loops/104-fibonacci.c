#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 *
 * Return: 0 (success)
 */
int main(void)
{
	print_fibonacci();

	return (0);
}
void print_fibonacci(void)
{

	unsigned long int a = 1, b = 2, c, i;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
}
