#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row, column;

	for (row = 0; row < size; row++) /*Loop for each row*/
	{
		for (column = 0; column <= row; column++)
		{
			_putchar('#');/*Print '#' for each column in the row*/
		}
		_putchar('\n');/*Move to the next line after each row*/
	}
}
