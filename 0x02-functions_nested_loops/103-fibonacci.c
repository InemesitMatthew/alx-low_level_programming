#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence that do not exceed 4,000,000.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int  a = 1, b = 2, c, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		c = a + b;
		a = b;
		b = c;
	}

	printf("%lu\n", sum);

	return (0);
}
