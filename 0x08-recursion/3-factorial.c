#include "main.h"
/**
 * factorial - function that calculates the factorial of a number.
 * @n: param 1.
 * Return: an integer is return.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); }
else if (n == 0)
{
return (1); }
else
{
return (n * factorial(n - 1));
}
}

