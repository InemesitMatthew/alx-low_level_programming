#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
