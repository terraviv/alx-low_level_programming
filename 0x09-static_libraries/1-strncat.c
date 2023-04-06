#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int x1, x2;

	x1 = 0;
	while (dest[x1] != '\0')
	{
		x1++;
	}
	x2 = 0;
	while (x2 < n && src[x2] != '\0')
	{
	dest[x1] = src[x2];
	x1++;
	x2++;
	}
	dest[x1] = '\0';
	return (dest);
}

