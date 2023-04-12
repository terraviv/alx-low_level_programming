#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * **strtow - function that splits a string into words.
 * @str: param 1.
 * Return: a char or NULL is return.
 */
char **strtow(char *str)
{
	int x1, x2, x3, my_word_cp = 0;
	int my_word_len;
	char **my_words;

	if (*str == '\0' || str == NULL || strcmp(str, "                ") == 0)
		return (NULL);
	my_word_len = strlen(str);
	for (x1 = 0; x1 < my_word_len; x1++)
	{
		if ((x1 == 0 || isspace(str[x1 - 1])) && !isspace(str[x1]))
			my_word_cp = my_word_cp + 1;
	}
	my_words = (char **) malloc(sizeof(char *) * (my_word_cp + 1));
	if (my_words == NULL)
		return (NULL);
	for (x1 = 0, x2 = 0; x2 < my_word_cp; x2++)
	{
		while (isspace(str[x1]))
			x1++;
		x3 = x1;
		while (x3 < my_word_len && !isspace(str[x3]))
			x3++;
		my_words[x2] = (char *) malloc(sizeof(char *) - 1));
		if (my_words[x2] == NULL)
		{
			for (x1 = 0; x1 < x2; x1++)
				free(my_words[x1]);
			free(my_words);
			return (NULL);
		}
		strncpy(my_words[x2], &str[x1], x3 - x1);
		my_words[x2][x3 - x1] = '\0';
		x1 = x3;
	}
	my_words[my_word_cp] = NULL;
	return (my_words);
}

