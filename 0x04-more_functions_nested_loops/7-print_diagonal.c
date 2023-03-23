#include "main.h"

/**
 * print_diagonal - shows a diagonal.
 * @n: int param.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x1, x2;

		for (x1 = 0; x1 < n; x1++)
		{
			for (x2 = 0; x2 < n; x2++)
			{
				if (x2 == x1)
					_putchar('\\');
				else if (x2 < x1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

