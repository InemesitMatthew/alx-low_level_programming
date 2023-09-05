#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;  /* Flag to track if we're in a word */

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			in_word = 0;  /* We're not in a word anymore */
		}
		else if (in_word == 0)
		{
			in_word = 1;  /* We're in a new word */
			count++;      /* Increment the word count */
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words)
 * or NULL if str is NULL or empty.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	char **word_array = malloc((num_words + 1) * sizeof(char *));

	if (word_array == NULL)
		return (NULL);

	int i = 0;
	int word_len = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (word_len > 0)
			{
				word_array[i] = malloc((word_len + 1) * sizeof(char));
				if (word_array[i] == NULL)
				{
					for (int j = 0; j < i; j++)
						free(word_array[j]);
					free(word_array);
					return (NULL);
				}
				i++;
				word_len = 0;
			}
		}
		else
		{
			word_len++;
		}
		str++;
	}

	if (word_len > 0)
	{
		word_array[i] = malloc((word_len + 1) * sizeof(char));
		if (word_array[i] == NULL)
		{
			for (int j = 0; j <= i; j++)
				free(word_array[j]);
			free(word_array);
			return (NULL);
		}
	}

	/* Reset str pointer to the beginning of the input string */
	str -= word_len;
	i = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (word_len > 0)
			{
				word_array[i][word_len] = '\0';  /* Null-terminate the word */
				i++;
				word_len = 0;
			}
		}
		else
		{
			word_array[i][word_len] = *str;
			word_len++;
		}
		str++;
	}

	if (word_len > 0)
	{
		word_array[i][word_len] = '\0';  /* Null-terminate the last word */
	}

	word_array[i + 1] = NULL;  /* Null-terminate the array of words */

	return (word_array);
}
