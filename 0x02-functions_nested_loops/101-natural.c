#include <stdio.h>

/**
 * main -  naturals.
 * Return: 0.
 */
int main(void)
{
	int x1, total = 0;

	for (x1 = 0; x1 < 1024; x1++)
	{
		if ((x1 % 3) == 0 || (x1 % 5) == 0)
			total += x1;
	}

	printf("%d\n", total);

	return (0);
}

