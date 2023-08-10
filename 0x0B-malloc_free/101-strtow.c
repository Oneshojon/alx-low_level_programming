#include <stddef.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *is_whitespace - Checks for whitespace
 *@c: the individual character
 *
 *Return: y / n
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 *count_words - counts the number of words in a string
 *@str: The given string
 *
 *Return: A value
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!(is_whitespace(*str)))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

/**
 *strtow - SPlits a sting into words
 *@str: The string to be splitted
 *
 *Return: A pointer to the array of strings
 */
char **strtow(char *str)
{
	int word_count = count_words(str);
	int w_index = 0;
	int w_length = 0;
	int in_word = 0;
	int i, j;
	char **new_str;


	if (str == NULL || *str == '\0')
		return (NULL);

	new_str =(char **) malloc((word_count + 1) * sizeof(char *));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (!is_whitespace(str[i]))
		{
			if (!in_word)
			{
				in_word = 1;
				w_length = 1;
				new_str[w_index] =(char *)malloc(sizeof(char));
				if (new_str[w_index] == NULL)
				{
				for (j = 0; j < w_index; j++)
				{
					free(new_str[j]);
				}
				free(new_str);
				return (NULL);
			}
		}
		else
		{
			w_length++;
			new_str[w_index] = (char *)realloc(new_str[w_index], w_length * sizeof(char));
		}
		new_str[w_index][w_length - 1] = str[i];
		}
		else
		{
			if (in_word)
			{
				in_word = 0;
				new_str[w_index][w_length] = '\0';
				w_index++;
			}
		}
	}
	new_str[w_index] = NULL;
	return (new_str);
}
