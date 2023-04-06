#include "main.h"

/**
 * _islower - check if c is a lowercase letter.
 * @c: a character parameter.
 * Return: 1 if c is lowercase, and otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
