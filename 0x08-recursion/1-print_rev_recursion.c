#include "main.h"
/**
 * _print_rev_recursion - a function that shows a string in reverse order.
 * @s: param 1.
 * Return: nothing is return.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}

