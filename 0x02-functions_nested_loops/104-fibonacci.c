#include <stdio.h>

/**
 *  main - show the first 98 Fibonacci numbers.
 *
 *  Return: 0.
 */
int main(void)
{
	int c, z1, z2;
	long int x1, x2, fn, y2, x3, x4;

	x1 = 1;
	x2 = 2;
	z1 =  z2 = 1;
	printf("%ld, %ld", x1, x2);
	for (c = 0; c < 96; c++)
	{
		if (z1)
		{
			fn = x1 + x2;
			printf(", %ld", fn);
			x1 = x2;
			x2 = fn;
		}
		else
		{
			if (z2)
			{
				x3 = x1 % 1000000000;
				x4 = x2 % 1000000000;
				x1 = x1 / 1000000000;
				x2 = x2 / 1000000000;
				z2 = 0;
			}
			y2 = (x3 + x4);
			fn = x1 + x2 + (y2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", y2 % 1000000000);
			x1 = x2;
			x3 = x4;
			x2 = fn;
			x4 = (y2 % 1000000000);
		}
		if (((x1 + x2) < 0) && z1 == 1)
			z1 = 0;
	}
	printf("\n");
	return (0);
}

