#include "main.h"
#include <math.h>

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if it's prime, 0 if not.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0); /* 0 and 1 are not prime numbers */

	if (n == 2)
		return (1); /* 2 is a prime number */

	if (n % 2 == 0)
		return (0); /* Even numbers greater than 2 are not prime */

	/* Check for divisibility from 3 to the square root of n */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
			return (0); /* n is divisible by i, so it's not prime */
	}

	return (1); /* n is prime */
}
