#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function that add numbers.
 * @argc: param 1.
 * @argv: param 2.
 * Return: an integer is return.
 */
int main(int argc, char **argv)
{
int number_of_arguments = argc - 1;
int sum_of_numbers = 0;
int mycounter = 1;
if (number_of_arguments < 1)
{
printf("0\n");
return (0);
}
while (mycounter < argc)
{
char *mycheck = argv[mycounter];

while (*mycheck)
{
if (!isdigit(*mycheck))
{
printf("Error\n");
return (1); }
mycheck++;
}
sum_of_numbers = sum_of_numbers + atoi(argv[mycounter]);
mycounter++;
}
printf("%d\n", sum_of_numbers);
return (sum_of_numbers);
}

