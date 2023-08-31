#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
			 /**
			  *Base case: Check if we've reached
			  *the end of the string.
			  */
	{
		_putchar('\n');/* Print a new line when we reach the end. */
		return;
	}
	_putchar(*s);/* Print the current character. */
	_puts_recursion(s + 1);
			       /**
				*  Recursively call the function
				*  with the next character.
				*/
}
