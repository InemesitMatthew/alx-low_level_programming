#include "3-islower.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /*Character is lowercase */
	}
	else
	{
		return (0); /*Character is not lowercase*/
	}
}
