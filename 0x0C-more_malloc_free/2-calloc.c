#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_calloc - function name
 * @nmemb: param 1.
 * @size: param 2.
 * Return: a pointer is return.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_pointer_var_1;

	if (size == 0 || nmemb == 0)
		return (NULL);
	my_pointer_var_1 = malloc(size * nmemb);
	if (my_pointer_var_1 == NULL)
		return (NULL);
	memset(my_pointer_var_1, 0, size * nmemb);
	return (my_pointer_var_1);
}

