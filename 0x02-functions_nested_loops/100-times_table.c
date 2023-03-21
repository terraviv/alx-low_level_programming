#include "main.h"

/**
 * print_times_table - show the n times table.
 * @n : int param.
 */
void print_times_table(int n)
{
	int x1, x2, x3;

	if (n >= 0 && n <= 15)
	{
		for (x1 = 0; x1 <= n; x1++)
		{
			for (x2 = 0; x2 <= n; x2++)
			{
				x3 = x2 * x1;
				if (x2 == 0)
				{
					_putchar(x3 + '0');
				} else if (x3 < 10 && x2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x3 + '0');
				} else if (x3 >= 10 && x3 < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x3 / 10) + '0');
					_putchar((x3 % 10) + '0');
				} else if (x3 >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x3 / 100) + '0');
					_putchar(((x3 / 10) % 10) + '0');
					_putchar((x3 % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
