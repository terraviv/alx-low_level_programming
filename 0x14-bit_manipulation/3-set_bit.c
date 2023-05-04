#include "main.h"
/**
 * set_bit - fd1
 * @n: eede2
 * @index: plo
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
size_t ieea = sizeof(unsigned long int) * 8 - 1;
if (index > ieea)
return (-1);
*n = ((1 << index) | *n);
return (1);
}

