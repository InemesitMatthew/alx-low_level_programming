#include "main.h"

/**
 * wildcmp - Compares two strings with a special character '*'.
 * @s1: The first string.
 * @s2: The second string (may contain '*').
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		/* Skip consecutive '*' characters in s2. */
		while (*s2 == '*')
			s2++;

		if (*s2 == '\0') /**
		                   * If s2 contains only '*',
		                   * they match any string, so return 1.
		                   */
			return (1);

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2))
				/**
				* Try to match s1 with the rest
				* of s2 (without using the
				* current '*').
				*/
				return (1);
			s1++;
		}

		return (0); /* If no match is found, return 0. */
	}

	if (*s1 == '\0')
		/**
		* If s1 is empty, s2 must also be empty
		* or contain only '*'.
		*/
	{
		while (*s2 == '*')
			s2++;
		return (*s2 == '\0');
	}

	if (*s1 == *s2 || *s2 == '?')
		/**
		* If the current characters match
		* or s2 has '?', continue checking.
		*/
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
	/**
	* If none of the conditions match,
	* the strings are not identical.
	*/
}
