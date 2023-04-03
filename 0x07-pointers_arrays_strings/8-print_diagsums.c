#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function name
 * @a: input 1
 * @size: input 2
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x1, x2, x3;

	x1 = 0;
	x2 = 0;

	for (x3 = 0; x3 < size; x3++)
	{
		x1 = x1 + a[x3 * size + x3];
	}

	for (x3 = size - 1; x3 >= 0; x3--)
	{
		x2 += a[x3 * size + (size - x3 - 1)];
	}

	printf("%d, %d\n", x1, x2);
}

