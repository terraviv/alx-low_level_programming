#include <stdio.h>

/**
 * main - show first 50 Fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long x1 = 0,
	unsigned long x2 = 1;
	unsigned long total;

	for (count = 0; count < 50; count++)
	{
		total = x1 + x2;
		printf("%lu", total);

		x1 = x2;
		x2 = total;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
