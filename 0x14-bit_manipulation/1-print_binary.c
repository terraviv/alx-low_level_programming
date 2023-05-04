#include "main.h"
/**
 * print_binary - rttm
 * @n: p12
 */
void print_binary(unsigned long int n)
{
int faceteux;
unsigned long int chapeau;

faceteux = 0;
chapeau = 1ul << (sizeof(unsigned long int) * 8 - 1);
while (chapeau > 0)
{
if (chapeau & n)
{
_putchar('1');
faceteux = 1;
}
else if (faceteux)
{
_putchar('0');
}
chapeau = chapeau >> 1;
}
if (!faceteux)
{
_putchar('0');
}
}

