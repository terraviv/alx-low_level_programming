#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function name.
 * @b: param 1.
 * Return: a pointer is return.
 */
void *malloc_checked(unsigned int b)
{
	void *my_pointer_1 = malloc(b);

	if (my_pointer_1 == NULL)
		exit(98);
	return (my_pointer_1);
}




