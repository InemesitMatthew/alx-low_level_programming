#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 *
 * Return: Always 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)/*65 and 90 are ascii for A to Z*/
	{
		return (1); /*Uppercase*/
	}
	else
	{
		return (0);
	}
}
