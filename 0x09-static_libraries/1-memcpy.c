#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: param 1
 *@src: param 2
 *@n: param 3
 *
 *Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x1 = 0, x2 = n;

	for (; x1 < x2; x1++)
	{
		dest[x1] = src[x1];
		n--;
	}
	return (dest);
}

