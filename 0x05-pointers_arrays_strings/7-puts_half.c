#include "main.h"
/**
 * puts_half - about half of a string
 * @str: param
 * Return: nothing
 */
void puts_half(char *str)
{
	int x1, x2, x3;

	x3 = 0;

	for (x1 = 0; str[x1] != '\0'; x1++)
		x3++;

	x2 = (x3 / 2);

	if ((x3 % 2) == 1)
		x2 = ((x3 + 1) / 2);

	for (x1 = x2; str[x1] != '\0'; x1++)
		_putchar(str[x1]);
	_putchar('\n');
}

