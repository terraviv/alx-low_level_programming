#include "main.h"
#include <stdio.h>

/**
 * print_buffer - shows buffer
 * @b: param 1
 * @size: param 2
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int x1, x2, x3;

	x1 = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x1 < size)
	{
		x2 = size - x1 < 10 ? size - x1 : 10;
		printf("%08x: ", x1);
		for (x3 = 0; x3 < 10; x3++)
		{
			if (x3 < x2)
				printf("%02x", *(b + x1 + x3));
			else
				printf("  ");
			if (x3 % 2)
			{
				printf(" ");
			}
		}
		for (x3 = 0; x3 < x2; x3++)
		{
			int c = *(b + x1 + x3);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x1 += 10;
	}
}

