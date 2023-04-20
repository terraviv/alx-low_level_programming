#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - f4.
 * @format: element.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *my_pointer, *the_var = "";
	va_list my_args;

	va_start(my_args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", the_var, va_arg(my_args, int));
					break;
				case 'f':
					printf("%s%f", the_var, va_arg(my_args, double));
					break;
				case 'i':
					printf("%s%d", the_var, va_arg(my_args, int));
					break;
				case 's':
					my_pointer = va_arg(my_args, char *);
					if (!my_pointer)
						my_pointer = "(nil)";
					printf("%s%s", the_var, my_pointer);
					break;
				default:
					i++;
					continue;
			}
			the_var = ", ";
			i++;
		}
	}
	va_end(my_args);
	printf("\n");
}

