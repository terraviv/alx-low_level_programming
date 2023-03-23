#include "main.h"

/**
 * print_numbers - show all digits.
 * return: nothing.
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
