#include "main.h"
/**
 * _strspn - function _strspn
 * @s: input 1
 * @accept: input 2
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x1 = 0;
	int x2;

	while (*s)
	{
		for (x2 = 0; accept[x2]; x2++)
		{
			if (*s == accept[x2])
			{
				x1++;
				break;
			}
			else if (accept[x2 + 1] == '\0')
				return (x1);
		}
		s++;
	}
	return (x1);
}

