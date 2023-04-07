#include "main.h"
#include <unistd.h>
/**
 * _putchar - function _putchar
 * @c: param 1
 * Return: an integer is return.
 */

int _putchar(char c)
{
char my_char = c;
return (write(1, &my_char, 1));
}

