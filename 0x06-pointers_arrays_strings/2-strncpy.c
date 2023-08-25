#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest.
 * @dest: The destination buffer where the result is stored.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest; /* Store the starting address of dest.*/

	/* Step 1: Copy characters from src to dest, up to n characters */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/**
	 * Step 2: If n is greater than the length of src,
	 * pad dest with null bytes
	 */
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
			  /**
			   *Step 3: Return a pointer to the beginning
			   *of the copied string
			   */
}
