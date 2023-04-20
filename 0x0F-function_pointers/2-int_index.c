#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - f3
 * @array: element
 * @size: element
 * @cmp: element
 * Return: an integer is returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cpt;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	cpt = 0;
	while (cpt < size)
	{
		if (cmp(array[cpt]))
			return (cpt);
		cpt = cpt + 1;
	}
	return (-1);
}

