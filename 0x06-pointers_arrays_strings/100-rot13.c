#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoding in rot13
 * @s: param 1
 *
 * Return: s
 */

char *rot13(char *s)
{
	int x1, x2;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x1 = 0; s[x1] != '\0'; x1++)
	{
		for (x2 = 0; x2 < 52; x2++)
		{
			if (s[x1] == data1[x2])
			{
				s[x1] = datarot[x2];
				break;
			}
		}
	}
	return (s);
}

