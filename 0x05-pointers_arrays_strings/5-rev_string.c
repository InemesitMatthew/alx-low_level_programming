#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	int i;
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}