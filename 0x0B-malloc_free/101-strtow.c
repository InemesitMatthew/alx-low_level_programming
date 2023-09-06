#include <stdlib.h>
#include <stdio.h>

/**
 * duplicate_word - Duplicates a word from a string.
 * @str: The string containing the word.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 *
 * Return: A newly allocated string containing the word.
 */
char *duplicate_word(char *str, int start, int end)
{
	int len = end - start + 1;
	char *word = malloc(len + 1);

	if (word == NULL)
		return (NULL);

	for (int i = 0; i < len; i++)
		word[i] = str[start + i];
	word[len] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, len = 0, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
        {
		len++;
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			word_count++;
			len = 0;
		}
	}
	}

	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ')
        {
		int start = i;

		while (str[i] && str[i] != ' ')
			i++;

		words[j] = duplicate_word(str, start, i - 1);
		if (words[j] == NULL)
		{
			while (j >= 0)
				free(words[j--]);
			free(words);
			return (NULL);
		}

		j++;
	}
	}

	words[word_count] = NULL;
	return (words);
}
