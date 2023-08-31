#include "main.h"
#include <ctype.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	char *start, *end;

	start = s;
	end = s;

	while (*end != '\0')
	{
		if (!isalnum(*end))
		{
			end++;
			continue;
		}

		end++;
	}

	end--;

	while (start < end)
	{
		if (!isalnum(*start))
		{
			start++;
			continue;
		}

		if (!isalnum(*end))
		{
			end--;
			continue;
		}

		if (tolower(*start) != tolower(*end))
		{
			return 0;
		}

		start++;
		end--;
	}

	return 1;
}
