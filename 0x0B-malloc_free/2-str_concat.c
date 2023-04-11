#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenate.
 * @s1: param 1.
 * @s2: param 2.
 * Return: a char or NULL is return.
 */
char *str_concat(char *s1, char *s2)
{
	size_t length_of_s1;
	size_t length_of_s2;
	char *my_output;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	length_of_s1 = strlen(s1);
	length_of_s2 = strlen(s2);
	my_output = malloc(sizeof(char) * (length_of_s1 + length_of_s2 + 1));
	if (!my_output)
		return (NULL);
	strcpy(my_output, s1);
	strcat(my_output, s2);
	return (my_output);

}

