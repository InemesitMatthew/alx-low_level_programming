#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)/*if n is 0 or less, only print a newline*/
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)/*Loop to print n underscores*/
		{
			_putchar('_');
		}
		_putchar('\n');/*Move to a new line after printing the line*/
	}
}
