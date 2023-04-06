#include "main.h"
/**
 * _strpbrk - function _strpbrk
 * @s: input 1
 * @accept: input 2
 * Return: s or \0
 */
char *_strpbrk(char *s, char *accept)
{
		int x1;

		while (*s)
		{
			for (x1 = 0; accept[x1]; x1++)
			{
			if (*s == accept[x1])
			return (s);
			}
		s++;
		}

	return ('\0');
}

