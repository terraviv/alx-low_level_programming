#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * Return: 0
 */
int main(void)
{
	int x1[100];
	int x2, x3, x4;

	x3 = 0;
	srand(time(NULL));

	for (x2 = 0; x2 < 100; x2++)
	{
		x1[x2] = rand() % 78;
		x3 += (x1[x2] + '0');
		putchar(x1[x2] + '0');
		if ((2772 - x3) - '0' < 78)
		{
			x4 = 2772 - x3 - '0';
			x3 += x4;
			putchar(x4 + '0');
			break;
		}
	}

	return (0);
}

