#include "main.h"
/**
* binary_to_uint - olk45
* @b: ojg7
* Return: qa0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int s1;

s1 = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b == '0' || *b == '1')
{
s1 = (*b - '0') | (s1 << 1);
b = 1 + b;
}
else
{
return (0);
}
}
return (s1);
}

