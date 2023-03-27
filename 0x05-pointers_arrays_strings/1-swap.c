#include "main.h"
/**
 * swap_int - swapping integers.
 * @a: param 1
 * @b: param 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

