#include "3-calc.h"
int op_sub(int a, int b);
int op_add(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);

/**
 * op_sub - diff.
 * @a: element.
 * @b: element.
 * Return: a-b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_add - add.
 * @a: element.
 * @b: element.
 * Return: a+b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - mul.
 * @a: element.
 * @b: element.
 * Return: a*b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - modulo.
 * @a: element.
 * @b: element.
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 * op_div - div.
 * @a: element.
 * @b: element.
 * Return: a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

