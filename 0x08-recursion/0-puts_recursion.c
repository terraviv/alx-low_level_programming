#include "main.h"
/**
 * _puts_recursion - a function that imitates puts()
 * @s: param 1
 * Return: this function return nothing
 */
void _puts_recursion(char *s)
{
	if (*s == false)
	{
		_putchar('\n');
	}
	else
	{
	    _putchar(*s);
	    _puts_recursion(s + 1);
	}
}

