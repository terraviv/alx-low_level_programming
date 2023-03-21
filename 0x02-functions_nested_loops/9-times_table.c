#include "main.h"

/**
 * times_table - prints the 9 times table.
 */
void times_table(void)
{
	int x1, x2, x3;

	for (x1 = 0; x1 < 10; x1++)
	{
		for (x2 = 0; x2 < 10; x2++)
		{
			x3 = x2 * x1;

			if (x2 == 0)
			{
				_putchar(x3 + '0');
			}
			else if (x3 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x3 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x3 / 10) + '0');
				_putchar((x3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

