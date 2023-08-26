#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int capitalize_next = 1; /* Capitalize the next character. */
	int i;

	for (i = 0; s[i]; i++)
	{
		if (is_separator(s[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ('a' - 'A'); /* Convert to uppercase. */
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (s);
}

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}
