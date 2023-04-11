#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments.
 * @ac: param 1.
 * @av: param 2.
 * Return: a char is return.
 */
char *argstostr(int ac, char **av)
{
	int x1, x2, x3 = 0, my_len;
	char *my_output;

	if (av == NULL || ac == 0)
		return (NULL);
	my_len = 0;
	for (x1 = 0; x1 < ac; x1++)
	{
		for (x2 = 0; av[x1][x2]; x2++)
			my_len++;
		my_len++;
	}
	my_output = malloc(sizeof(char) * (my_len + 1));
	if (my_output == NULL)
		return (NULL);
	for (x1 = 0; x1 < ac; x1++)
	{
	for (x2 = 0; av[x1][x2]; x2++)
	{
		my_output[x3] = av[x1][x2];
		x3++;
	}
	my_output[x3] = '\n';
	x3++;
	}
	my_output[x3] = '\0';
	return (my_output);
}

