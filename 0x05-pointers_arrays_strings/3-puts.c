#include "main.h"
/**
 * _puts - shows a string
 * @str: param
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

