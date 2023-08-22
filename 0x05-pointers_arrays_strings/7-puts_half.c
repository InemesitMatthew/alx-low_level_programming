#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	/*Calculate the length of the string*/
	while (str[length] != '\0')
	{
		length++;
	}

	/*Calculate the starting index for printing the second half*/
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	/*Prints the second half of the string*/
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	/*Print a newline character to seperate the output*/
	_putchar('\n');
}
