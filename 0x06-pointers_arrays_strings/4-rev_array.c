#include "main.h"
/**
 * reverse_array - reverse array
 * @a: param 1
 * @n: param 2
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x1;
	int x2;

	for (x1 = 0; x1 < n--; x1++)
	{
		x2 = a[x1];
		a[x1] = a[n];
		a[n] = x2;
	}
}

