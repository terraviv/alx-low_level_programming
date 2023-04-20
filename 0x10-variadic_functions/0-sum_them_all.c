#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - f1.
 * @n:  element.
 * @...: element.
 * Return: An integer is return.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int mycpt = 0, my_sum = 0;
	va_list my_args;

	va_start(my_args, n);
	while (mycpt < n)
	{
		my_sum = my_sum + va_arg(my_args, int);
		mycpt++;
	}
	va_end(my_args);
	return (my_sum);
}

