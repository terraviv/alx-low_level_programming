#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long int x1, x2, total;

	x1 = 0;
	x2 = 1;

	for (count = 0; count < 50; count++)
	{
		total = x1 + x2;
		printf("%ld", total);

		x1 = x2;
		x2 = total;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

