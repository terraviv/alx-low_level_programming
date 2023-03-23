#include "main.h"
#include <stdio.h>

/**
 * main - prints particular numbers.
 * Return: 0
 */
int main(void)
{
	int x1;

	for (x1 = 1; x1 <= 100; x1++)
	{
		if (x1 % 3 == 0 && x1 % 5 != 0)
		{
			printf(" Fizz");
		} else if (x1 % 5 == 0 && x1 % 3 != 0)
		{
			printf(" Buzz");
		} else if (x1 % 3 == 0 && x1 % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (x1 == 1)
		{
			printf("%d", x1);
		} else
		{
			printf(" %d", x1);
		}
	}
	printf("\n");

	return (0);
}

