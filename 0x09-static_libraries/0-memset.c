#include "main.h"
/**
 * _memset - filling block of memory
 * @s: param 1
 * @b: param 2
 * @n: param 3
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x1 = 0;

	for (; n > 0; x1++)
	{
		s[x1] = b;
		n--;
	}
	return (s);
}

