#include <unistd.h>

/**
 *  _putchar - Writes a character to the standard output 
 *  @c: The character to point
 *
 *  Return: On success, 1. On error, -1 and errno is set.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
