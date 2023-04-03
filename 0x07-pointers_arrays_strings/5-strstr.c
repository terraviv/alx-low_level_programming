#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input 1
 * @needle: input 2
 * Return: haystack or 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x1 = haystack;
		char *x2 = needle;

		while (*x1 == *x2 && *x2 != '\0')
		{
			x1++;
			x2++;
		}

		if (*x2 == '\0')
			return (haystack);
	}

	return (0);
}

