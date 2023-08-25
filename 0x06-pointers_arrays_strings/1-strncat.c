#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters from src.
 * @dest: The destination string where the result is stored.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of characters to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest; /*Store the starting address of dest.*/

	/* Step 1: Find the end of the destination string */
	while (*dest)
	{
		dest++;
	}

	/* Step 2: Append characters from src to dest, up to n characters */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0'; /* Step 3: Ensure the result is null-terminated */

	return (result);/*
			 *  Step 4: Return a pointer to the beginning
			 *  of the concatenated string
			 */
}
