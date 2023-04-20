#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - f1
 * @name: element
 * @f: element
 * Return: nothing is returned.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}

