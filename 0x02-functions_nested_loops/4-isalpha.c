#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1); /* Character is alphabetic */
        }
        else
        {
                return (0); /* Character is not alphabetic */
        }
}
