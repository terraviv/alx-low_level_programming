#include "main.h"

/**
 * _atoi - string to integer
 * @s: param
 *
 * Return: nothing
 */
int _atoi(char *s)
{
	int x1, x2, x3, l, x4, x5;

	x1 = 0;
	x2 = 0;
	x3 = 0;
	l = 0;
	x4 = 0;
	x5 = 0;

	while (s[l] != '\0')
		l++;

	while (x1 < l && x4 == 0)
	{
		if (s[x1] == '-')
			++x2;

		if (s[x1] >= '0' && s[x1] <= '9')
		{
			x5 = s[x1] - '0';
			if (x2 % 2)
				x5 = -x5;
			x3 = x3 * 10 + x5;
			x4 = 1;
			if (s[x1 + 1] < '0' || s[x1 + 1] > '9')
				break;
			x4 = 0;
		}
		x1++;
	}

	if (x4 == 0)
		return (0);

	return (x3);
}

