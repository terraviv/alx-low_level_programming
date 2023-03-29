#include "main.h"
/**
 * leet - encoding
 * @n: param 1
 * Return: n
 */
char *leet(char *n)
{
	int x1, x2;
	char x3[] = "aAeEoOtTlL";
	char x4[] = "4433007711";

	for (x1 = 0; n[x1] != '\0'; x1++)
	{
		for (x2 = 0; x2 < 10; x2++)
		{
			if (n[x1] == x3[x2])
			{
				n[x1] = x4[x2];
			}
		}
	}
	return (n);
}

