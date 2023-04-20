#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry function.
 * @argc: param 1
 * @argv: param 2
 * Return: an integer is return.
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	char *val_op;
	int inp1, inp2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val_op = argv[2];
	inp1 = atoi(argv[1]);
	inp2 = atoi(argv[3]);
	if (get_op_func(val_op) == NULL || val_op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*val_op == '/' && inp2 == 0) ||
	    (*val_op == '%' && inp2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(val_op)(inp1, inp2));
	return (0);
}

