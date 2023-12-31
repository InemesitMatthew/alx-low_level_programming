#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n >> (sizeof(unsigned long int) * 8 - 1 - i)) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
