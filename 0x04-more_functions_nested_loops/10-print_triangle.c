#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++) /*Loop for each row*/
	{
		for (column = 1; column <= row; column++)
		{
			_putchar('#');/*Print '#' for each column in the row*/
		}
		_putchar('\n');/*Move to the next line after each row*/
	}
}
