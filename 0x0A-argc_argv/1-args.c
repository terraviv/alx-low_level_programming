#include <stdio.h>
#include "main.h"
/**
 * main - shows args
 * @argc: param 1
 * @argv: param 2
 * Return: an integer is return.
 */
int main(int argc, char **argv __attribute__((unused)))
{
int number_of_arguments = argc - 1;
printf("%d\n", number_of_arguments);
return (0);
}

