#include "main.h"
/**
 * print_triangle - shows a triangle.
 * @size: int param.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x1, x2;

		for (x1 = 1; x1 <= size; x1++)
		{
			for (x2 = x1; x2 < size; x2++)
			{
				_putchar(' ');
			}

			for (x2 = 1; x2 <= x1; x2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

