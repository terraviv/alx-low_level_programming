#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: param 1
 * @s2: param 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x1;

	x1 = 0;
	while (s1[x1] != '\0' && s2[x1] != '\0')
	{
		if (s1[x1] != s2[x1])
		{
			return (s1[x1] - s2[x1]);
		}
		x1++;
	}
	return (0);
}

