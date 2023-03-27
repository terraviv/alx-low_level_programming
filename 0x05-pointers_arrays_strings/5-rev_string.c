#include "main.h"

/**
 * rev_string - Reversing
 * @s: param string
 * Return: a string
 */

void rev_string(char *s)
{
	char x1 = s[0];
	int x2 = 0;
	int i;

	while (s[x2] != '\0')
	x2++;
	for (i = 0; i < x2; i++)
	{
		x2--;
		x1 = s[i];
		s[i] = s[x2];
		s[x2] = x1;
	}
}

