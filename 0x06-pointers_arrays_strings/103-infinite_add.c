#include "main.h"

/**
 * rev_string - reversing array
 * @n: param 1
 * Return: nothing
 */

void rev_string(char *n)
{
	int x1 = 0;
	int x2 = 0;
	char x3;

	while (*(n + x1) != '\0')
	{
		x1++;
	}
	x1--;

	for (x2 = 0; x2 < x1; x2++, x1--)
	{
		x3 = *(n + x2);
		*(n + x2) = *(n + x1);
		*(n + x1) = x3;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: param 1
 * @n2: param 2
 * @r: param 3
 * @size_r: param 4
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0, x10 = 0;

	while (*(n1 + x5) != '\0')
		x5++;
	while (*(n2 + x6) != '\0')
		x6++;
	x5--;
	x6--;
	if (x6 >= size_r || x5 >= size_r)
		return (0);
	while (x6 >= 0 || x5 >= 0 || x4 == 1)
	{
		if (x5 < 0)
			x8 = 0;
		else
			x8 = *(n1 + x5) - '0';
		if (x6 < 0)
			x9 = 0;
		else
			x9 = *(n2 + x6) - '0';
		x10 = x8 + x9 + x4;
		if (x10 >= 10)
			x4 = 1;
		else
			x4 = 0;
		if (x7 >= (size_r - 1))
			return (0);
		*(r + x7) = (x10 % 10) + '0';
		x7++;
		x6--;
		x5--;
	}
	if (x7 == size_r)
		return (0);
	*(r + x7) = '\0';
	rev_string(r);
	return (r);
}

