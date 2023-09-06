#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				in_word = 0;
				count++;
			}
		}
		else
		{
			in_word = 1;
		}
		str++;
	}

	if (in_word)
		count++;

	return (count);
}

char *duplicate_word(char *str)
{
	int len = 0;
	char *word;

	while (str[len] && !is_space(str[len]))
		len++;

	word = malloc(len + 1);

	if (!word)
		return (NULL);

	for (int i = 0; i < len; i++)
		word[i] = str[i];

	word[len] = '\0';

	return (word);
}

char **strtow(char *str)
{
	int word_count;
	char **words, *word;
	char *str_copy = str;

	if (!str || !*str)
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (!words)
		return (NULL);

	int i;
	for (i = 0; i < word_count; i++)
	{
		while (*str_copy && is_space(*str_copy))
			str_copy++;

		word = duplicate_word(str_copy);

		if (!word)
		{
			for (int j = 0; j < i; j++)
				free(words[j]);

			free(words);
			return (NULL);
		}

		words[i] = word;

		while (*str_copy && !is_space(*str_copy))
			str_copy++;
	}

	words[word_count] = NULL;

	return (words);
}
