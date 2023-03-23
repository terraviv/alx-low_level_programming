#include "main.h"

/**
 * print_line - trace a straight line.
 * @n: int param.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x1;

		for (x1 = 1; x1 <= n; x1++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

