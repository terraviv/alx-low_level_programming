#include "3-calc.h"
/**
 * get_op_func - f4.
 * @s: input.
 * Return: an integer is return.
 */
int (*get_op_func(char *s))(int, int)
{
	int cpt = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	while (ops[cpt].op != NULL && *(ops[cpt].op) != *s)
		cpt++;
	return (ops[cpt].f);
}

