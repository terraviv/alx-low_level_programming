#include "main.h"
int prime_num_checker(int n, int acounter);
/**
 * is_prime_number - function that evaluates if an integer is a prime number.
 * @n: param 1.
 * Return: an integer is return.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0); }
else
{
return (prime_num_checker(n, n - 1)); }
}
/**
 * prime_num_checker - function secondary
 * @n: param 1.
 * @acounter: param 2.
 * Return: an integer is return.
 */
int prime_num_checker(int n, int acounter)
{
if (acounter == 1)
{
return (1); }
else if (acounter > 0 && n % acounter == 0)
{
return (0); }
else
{
return (prime_num_checker(n, acounter - 1)); }}

