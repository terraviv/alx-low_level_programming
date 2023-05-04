#include "main.h"
/**
 * get_bit - 74p
 * @n: fgv
 * @index: lo1
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
size_t mavarnia;

mavarnia = sizeof(unsigned long int) * 8;
if (index >= mavarnia)
return (-1);
return ((n >> index) & 1);
}

