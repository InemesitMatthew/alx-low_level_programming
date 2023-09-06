#include <stdlib.h>

/**
 * _strdup - Duplicates a string in newly allocated memory.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[length])
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the characters from str to duplicate */
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0'; /* Null-terminate the duplicate string */

	return (duplicate);
}
