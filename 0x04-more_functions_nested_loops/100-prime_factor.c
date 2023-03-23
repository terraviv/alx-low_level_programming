#include <stdio.h>
#include <math.h>

/**
 * main - largest prime factor.
 * Return: 0.
 */
int main(void)
{
	long int num;
	long int largest;
	long int x1;

	num = 612852475143;
	largest = -1;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	for (x1 = 3; x1 <= sqrt(num); x1 = x1 + 2)
	{
		while (num % x1 == 0)
		{
			largest = x1;
			num = num / x1;
		}
	}

	if (num > 2)
		largest = num;

	printf("%ld\n", largest);

	return (0);
}

