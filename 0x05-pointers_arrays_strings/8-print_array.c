#include "main.h"

/**
 * print_array - shows n elements of an array
 * @a: param 1
 * @n: param 2
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int x1;

	for (x1 = 0; x1 < (n - 1); x1++)
	{
		printf("%d, ", a[x1]);
	}
		if (x1 == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

