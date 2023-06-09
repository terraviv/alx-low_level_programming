#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that reproduce to new memory space.
 * @str: param 1.
 * Return: a char is return.
 */
char *_strdup(char *str)
{
	size_t my_char_length;
	char *my_new_string;

	if (str == NULL)
		return (NULL);
	my_char_length = strlen(str);
	my_new_string = malloc(sizeof(char) * (my_char_length + 1));
	if (my_new_string == NULL)
		return (NULL);
	strcpy(my_new_string, str);
	return (my_new_string);
}

