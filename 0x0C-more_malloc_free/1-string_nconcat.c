#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - function name
 * @s1: param 1.
 * @s2: param 2.
 * @n: param 3.
 * Return: a pointer is return.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *the_output_var;
	size_t length_of_s1_var, length_of_s2_var;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	length_of_s1_var = strlen(s1);
	length_of_s2_var = strlen(s2);
	if (n >= length_of_s2_var)
		n = length_of_s2_var;
	the_output_var = malloc((length_of_s1_var + n + 1) * sizeof(char));
	if (the_output_var == NULL)
		return (NULL);
	memcpy(the_output_var, s1, length_of_s1_var);
	memcpy(length_of_s1_var + the_output_var, s2, n);
	the_output_var[length_of_s1_var + n] = '\0';
	return (the_output_var);
}

