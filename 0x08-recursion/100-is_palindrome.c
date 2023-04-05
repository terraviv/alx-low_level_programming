#include "main.h"
int is_it_a_palindrome(char *s, int onecounter, int the_length);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that evaluates if a string is a palindrome
 * @s: param 1.
 * Return: an integer is return.
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1); }
else
{
return (is_it_a_palindrome(s, 0, _strlen_recursion(s))); }
}
/**
 * _strlen_recursion - an intermediate function
 * @s: param 1.
 * Return: an integer is return.
 */
int _strlen_recursion(char *s)
{
int length_of_s = 0;
if (*s)
{
length_of_s++;
length_of_s += _strlen_recursion(s + 1);
}
return (length_of_s);
}
/**
 * is_it_a_palindrome - an intermediate function
 * @s: param 1.
 * @onecounter: param 2.
 * @the_length: param 3.
 * Return: an integer is return.
 */
int is_it_a_palindrome(char *s, int onecounter, int the_length)
{
if (onecounter >= the_length)
{
return (1); }
else if (*(s + onecounter) != *(s + the_length - 1))
{
return (0); }
else
{
return (is_it_a_palindrome(s, onecounter + 1, the_length - 1)); }}

