#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that shows minimum number of coins.
 * @argc: param 1.
 * @argv: param 2.
 * Return: an integer is return.
 */
int main(int argc, char **argv)
{
int number_of_arguments = argc - 1;
if (number_of_arguments == 1)
{
int my_cents = atoi(argv[1]);
int my_coins = 0;
if (my_cents < 0)
{
	printf("0\n");
	return (0);
}
my_coins = my_coins + (my_cents / 25);
my_cents = my_cents % 25;
my_coins = my_coins + (my_cents / 10);
my_cents = my_cents % 10;
my_coins = my_coins + (my_cents / 5);
my_cents = my_cents % 5;
my_coins = my_coins + (my_cents / 2);
my_cents = my_cents % 2;
my_coins = my_coins + my_cents;
printf("%d\n", my_coins);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}

