#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)/*if n is 0 or less, print only a newline*/
	{
		_putchar('\n');/*Print a newline character*/
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)/*Loop to print n lines*/
		{
			for (j = 0; j < i; j++)/*Loop to print spaces be*/
			{
				_putchar(' ');/*print a space character*/
			}
			_putchar('\\');/*Print a '\' character for the diagonal*/
			_putchar('\n');/*Move to a new line after each line*/
		}
	}
}
