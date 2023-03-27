#include "main.h"

/**
 * char *_strcpy - copy of the string
 * @dest: param 1
 * @src: param 2
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int x1 = 0;
	int x2 = 0;

	while (*(src + x1) != '\0')
	{
		x1++;
	}
	for ( ; x2 < x1 ; x2++)
	{
		dest[x2] = src[x2];
	}
	dest[x1] = '\0';
	return (dest);
}

