#include "main.h"
/**
 * print_rev - reverse
 * @s: param string
 * return: always 0
 */
void print_rev(char *s)
{
	int l = 0;
	int x1;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (x1 = l; x1 > 0; x1--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

