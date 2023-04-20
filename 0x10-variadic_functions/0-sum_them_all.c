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

	if (n == 0)
		return (0);
	va_start(my_args, n);
	while (mycpt < n)
	{
		sum += va_arg(ap, int);
		mycpt++;
	}
	va_end(my_args);
	return (my_sum);
}

