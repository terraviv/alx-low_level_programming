#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * cdg - f1
 * @s: param 1.
 * Return: integer
 */
int cdg(char *s)
{
	int i;

i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i = 1 + i;
	}
	return (1);
}
/**
 * sl - f2
 * @s: param 1.
 * Return: integer
 */
int sl(char *s)
{
	int a_var = 0;

	while (s[a_var] != '\0')
		a_var++;
	return (a_var);
}
/**
 * errors - e1.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - principal
 * @argc: param 1.
 * @argv: param 2.
 * Return: integer.
 */
int main(int argc, char **argv)
{
	char *fn1, *fn2;
	int lfn1, lfn2, len, a = 0, mycp1, cvar, digit1, digit2, *the_output;

	fn2 = argv[2], fn1 = argv[1];
	if (argc != 3 || !cdg(fn1) || !cdg(fn2))
		errors();
	lfn1 = sl(fn1);
	lfn2 = sl(fn2);
	len = lfn1 + lfn2 + 1;
	the_output = malloc(sizeof(int) * len);
	if (!the_output)
		return (1);
	for (mycp1 = 0; mycp1 <= lfn1 + lfn2; mycp1++)
		the_output[mycp1] = 0;
	for (lfn1 = lfn1 - 1; lfn1 >= 0; lfn1--)
	{
		digit1 = fn1[lfn1] - '0';
		cvar = 0;
		for (lfn2 = sl(fn2) - 1; lfn2 >= 0; lfn2--)
		{
			digit2 = fn2[lfn2] - '0';
			cvar += (digit1 * digit2) + the_output[lfn1 + lfn2 + 1];
			the_output[lfn1 + lfn2 + 1] = cvar % 10;
			cvar = cvar / 10;
		}
		if (cvar > 0)
			the_output[lfn1 + lfn2 + 1] += cvar;
	}
	for (mycp1 = 0; mycp1 < len - 1; mycp1++)
	{
		if (the_output[mycp1])
			a = 1;
		if (a)
			_putchar(the_output[mycp1] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(the_output);
	return (0);
}

