#include "main.h"

/**
 * cap_string - Capitalizes a string.
 * @str: param 1.
 * Return: str.
 */
char *cap_string(char *str)
{
	int x1 = 0;

	while (str[x1])
	{
		while (!(str[x1] >= 'a' && str[x1] <= 'z'))
			x1++;

		if (str[x1 - 1] == ' ' ||
		    str[x1 - 1] == '\t' ||
		    str[x1 - 1] == '\n' ||
		    str[x1 - 1] == ',' ||
		    str[x1 - 1] == ';' ||
		    str[x1 - 1] == '.' ||
		    str[x1 - 1] == '!' ||
		    str[x1 - 1] == '?' ||
		    str[x1 - 1] == '"' ||
		    str[x1 - 1] == '(' ||
		    str[x1 - 1] == ')' ||
		    str[x1 - 1] == '{' ||
		    str[x1 - 1] == '}' ||
		    x1 == 0)
			str[x1] -= 32;

		x1++;
	}

	return (str);
}

