#include "main.h"
/**
 * _strcat - concatenatenation of two strings
 * @dest: param 1
 * @src: param 2
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int x1, x2;

	x1 = 0;
	while (dest[x1] != '\0')
	{
		x1++;
	}
	x2 = 0;
	while (src[x2] != '\0')
	{
		dest[x1] = src[x2];
		x1++;
		x2++;
	}

	dest[x1] = '\0';
	return (dest);
}

