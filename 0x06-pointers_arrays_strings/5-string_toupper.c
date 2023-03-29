#include "main.h"
/**
 * string_toupper - converts from lowercase to uppercase
 * @n: param 1
 * Return: n
 */
char *string_toupper(char *n)
{
	int x2;

	x2 = 0;
	while (n[x2] != '\0')
	{
		if (n[x2] >= 'a' && n[x2] <= 'z')
			n[x2] = n[x2] - 32;
		x2++;
	}
	return (n);
}

