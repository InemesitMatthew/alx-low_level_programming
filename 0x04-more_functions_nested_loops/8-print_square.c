#include "main.h"

/**
 * print_square - prints a square pattern in the terminal
 * @size: the size of the square
 */
void print_square(int size)
{
	if (size <= 0)/*if size is 0 or less, print only a newline*/
	{
		_putchar('\n');/*Print a newline character*/
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)/*Loop to print 'size' number of rows*/
		{
			for (j = 0; j < size; j++)/*Loop to print 'size' number of columns*/
			{
				_putchar('#');/*Print a '#' character*/
			}
			_putchar('\n');/*Move to a new line after each row*/
		}
	}
}
