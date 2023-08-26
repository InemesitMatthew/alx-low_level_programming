#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *leet_code = "43077171";

	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_code[j];
				break;
			}
		}
	}

	return (s);
}
