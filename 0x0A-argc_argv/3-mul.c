#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that multiplies two numbers.
 * @argc: param 1.
 * @argv: param 2.
 * Return: an integer is return.
 */
int main(int argc, char **argv)
{
int number_of_arguments = argc - 1;
if (number_of_arguments == 2)
{
int mul_result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul_result);
return (0); }
else
{
printf("Error\n");
return (1); }
}

