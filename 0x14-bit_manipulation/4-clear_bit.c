#include "main.h"
/**
 * clear_bit - gre4
 * @n: lokj1
 * @index: pm7
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
size_t zqkoqsq = sizeof(unsigned long int) * 8;
unsigned long int gaptr;

if (index > zqkoqsq)
return (-1);
gaptr = (~(1UL << index));
*n = *n &  gaptr;
return (1);
}

