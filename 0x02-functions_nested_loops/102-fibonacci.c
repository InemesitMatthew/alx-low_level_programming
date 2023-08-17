#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
