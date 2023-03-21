#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x1;
	long int x1, x2, next, total;

	x1 = 1;
	x2 = 2;
	total = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (x1 < 4000000 && (x1 % 2) == 0)
		{
			total = total + x1;
		}
		next = x1 + x2;
		x1 = x2;
		x2 = next;
	}

	printf("%ld\n", total);

	return (0);
}
