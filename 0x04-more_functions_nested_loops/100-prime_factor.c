#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int divisor = 2;

	while (num > 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%ld\n", divisor);

	return (0);
}
