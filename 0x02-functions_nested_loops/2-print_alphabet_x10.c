#include "main.h"

/**
 * print_alphabet_x10 - a function that shows the the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char s;
	int index = 0;

	while (index < 10)
	{
		s = 'a';
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		index++;
	}
}
