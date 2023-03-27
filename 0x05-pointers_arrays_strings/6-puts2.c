#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: param
 * Return: nothing
 */
void puts2(char *str)
{
	int x1 = 0;
	int x2 = 0;
	char *x3 = str;
	int x4;

	while (*x3 != '\0')
	{
		x3++;
		x1++;
	}
	x2 = x1 - 1;
	for (x4 = 0 ; x4 <= x2 ; x4++)
	{
		if (x4 % 2 == 0)
	{
		_putchar(str[x4]);
	}
	}
	_putchar('\n');
}

