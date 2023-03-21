#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int num = 1000000000;
	unsigned long int x1, x2, y1, y2, p;

	printf("%lu", bef);

	for (p = 1; p < 91; p++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	x1 = bef / num;
	x2 = bef % num;
	y1 = aft / num;
	y2 = aft % num;

	for (p = 92; p < 99; ++p)
	{
		printf(", %lu", y1 + (y2 / num));
		printf("%010lu", y2 % num);
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}

	printf("\n");
	return (0);
}

