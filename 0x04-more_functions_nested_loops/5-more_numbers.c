#include "main.h"

/**
 * more_numbers - prints 10 sets of numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)/*Loop to repeat 10 times*/
	{
		for (j = 0; j <= 14; j++)/*Loop to print numbers from 0 to 14*/
		{
			if (j > 9)/*if the number is two-digit, print the first digit*/
			{
				_putchar('0' + j / 10);/*print the first digit*/
				_putchar('0' + j % 10);/*print the second digit*/
			}
			else
			{
				_putchar('0' + j);/*Print the single digit number*/
			}
		}
		_putchar('\n');/*Move to a new line after each set of numbers*/
	}
}
