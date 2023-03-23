#include "main.h"

/**
 * _isdigit - function that check if a char is a digit.
 * @c: char param.
 *
 * Return: 0 or 1 depending on some conditions.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
