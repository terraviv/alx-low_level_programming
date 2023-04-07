#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - shows args
 * @argc: param 1
 * @argv: param 2
 * Return: an integer is return.
 */
int main(int argc, char **argv __attribute__((unused)))
{
int number_of_arguments = argc - 1;
printf("%d", number_of_arguments);
write(STDOUT_FILENO, "\n", 1);
return (0);
}

