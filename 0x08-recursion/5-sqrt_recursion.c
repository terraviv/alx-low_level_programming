#include "main.h"
int secondary_function(int n, int varcounter);
/**
 * _sqrt_recursion - function calculate the natural square root of a number.
 * @n: param 1.
 * Return: an integer is return.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1); }
else
{
return (secondary_function(n, 0)); }
}
/**
 * secondary_function - function intermediate
 * @n: param 1.
 * @varcounter: param 2.
 * Return:  an integer is return.
 */
int secondary_function(int n, int varcounter)
{
if (varcounter * varcounter > n)
{
return (-1); }
else if (varcounter * varcounter == n)
{
return (varcounter); }
else
{
return (secondary_function(n, varcounter + 1)); }}

