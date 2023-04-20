#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - f2.
 * @separator: element.
 * @n: element.
 * @...: element.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_numbers;
	unsigned int mycounter = 0;

	va_start(my_numbers, n);
	while (mycounter < n)
	{
		printf("%d", va_arg(my_numbers, int));
		if (mycounter != (n - 1) && separator)
			printf("%s", separator);
		mycounter++;
	}
	printf("\n");
	va_end(my_numbers);
}

