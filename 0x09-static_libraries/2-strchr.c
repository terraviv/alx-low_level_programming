#include "main.h"
/**
 * _strchr - Entry point
 * @s: input 1
 * @c: input 2
 * Return: char or 0
 */
char *_strchr(char *s, char c)
{
	int x1 = 0;

	for (; s[x1] >= '\0'; x1++)
	{
		if (s[x1] == c)
			return (&s[x1]);
	}
	return (0);
}

