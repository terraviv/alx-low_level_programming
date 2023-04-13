#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *array_range - function name
 * @min: param 1.
 * @max: param 2.
 * Return: a pointer is return.
 */
int *array_range(int min, int max)
{
	int my_counter_1;
	int *my_pointer_variable_1;

	if (min > max)
		return (NULL);
	my_pointer_variable_1 = malloc((max - min + 1) * sizeof(int));
	if (my_pointer_variable_1 == NULL)
		return (NULL);
	for (my_counter_1 = 0; my_counter_1 <= (max - min); my_counter_1++)
		my_pointer_variable_1[my_counter_1] = my_counter_1 + min;
	return (my_pointer_variable_1);
}

