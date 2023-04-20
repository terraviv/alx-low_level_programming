#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - f2
 * @array: input
 * @size: input
 * @action: input
 * Return: nothing is returned
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

