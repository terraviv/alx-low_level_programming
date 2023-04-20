#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - my func.
 * @separator: element.
 * @n: element.
 * @...: element.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list the_vars;
	unsigned int mycpt1 = 0;
	char *the_pointer;

	va_start(the_vars, n);
	while (mycpt1 < n)
	{
		the_pointer = va_arg(the_vars, char *);
		if (the_pointer == NULL)
			printf("(nil)");
		else
			printf("%s", the_pointer);

		if (mycpt1 != (n - 1) && separator != NULL)
			printf("%s", separator);
		mycpt1++;
	}
	printf("\n");
	va_end(the_vars);
}

