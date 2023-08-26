#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	int offset;

	while (*s)
	{
		offset = (*s >= 'a' && *s <= 'z') ? 'a' : 'A';
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = ((*s - offset + 13) % 26) + offset;
		}

		s++;
	}

	return (ptr);
}
