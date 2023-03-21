#include "main.h"

/**
 * _isalpha - a function to check for an alphabetic character.
 * @c: a character parameter.
 * Return: 1 if c is a letter,and 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

