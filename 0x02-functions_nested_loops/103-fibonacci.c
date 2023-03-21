#include <stdio.h>

/**
 * main - even valued fibo.
 * Return: Always 0.
 */
int main(void)
{
	int x1;
	unsigned long int x2, x3, x4, total;

	x2 = 1;
	x3 = 2;
	total = 0;

	for (x1 = 1; x1 <= 33; ++x1)
	{
		if (x2 < 4000000 && (x2 % 2) == 0)
		{
			total = total + x2;
		}
		x4 = x2 + x3;
		x2 = x3;
		x3 = x4;
	}

	printf("%lu\n", total);

	return (0);
}

