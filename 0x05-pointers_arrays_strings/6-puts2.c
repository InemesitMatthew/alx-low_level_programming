#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *y = str;
	int j;

	/*Calculate the length of the string*/
	for (; *y != '\0'; y++)
	{
		l++;
	}

	/*Calculate the index of the last character*/
	i = l - 1;

	/*Iterate through the string and print every other character*/
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}

	/*Print a newline character to seperate the output*/
	_putchar('\n');
}
