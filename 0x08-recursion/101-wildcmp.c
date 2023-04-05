#include "main.h"
/**
 * wildcmp - function for comparison of strings.
 * @s1: param 1.
 * @s2: param 2.
 * Return: an integer is return.
 */

int wildcmp(char *s1, char *s2)
{

if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); }
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1)); }
else if (*s1 == '\0')
{
if (*s2 == '*' && *s2 != '\0')
{
return (*s2 == '\0'); }
else
{
return (wildcmp(s1, s2 + 1)); }
}
else
{
return (0); }}

