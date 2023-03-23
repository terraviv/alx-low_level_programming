#include "main.h"

/**
 * more_numbers - show numbers.
 * return: nothing.
 */

void more_numbers(void)
{
	int x1, x2;

	for (x1 = 1; x1 <= 10; x1++)
	{
		for (x2 = 0; x2 <= 14; x2++)
		{
			if (x2 >= 10)
				_putchar('1');
			_putchar (x2 % 10 + '0');
		}
		_putchar('\n');
	}
}

