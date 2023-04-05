#include "main.h"
/**
 * _strlen_recursion - a function that gives the length of a string.
 * @s: param 1.
 * Return: an integer is return.
 */
int _strlen_recursion(char *s)
{
int length_of_s = 0;
if (!*s)
{
return (length_of_s); }
else
{
length_of_s++;
length_of_s = _strlen_recursion(s + 1) + length_of_s;
}
}

