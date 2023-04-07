#include <stdio.h>
#include "main.h"
/**
 * main - shows all arguments.
 * @argc: param 1.
 * @argv: param 2.
 * Return: an integer is return.
 */
int main(int argc, char **argv)
{
int mycounter = 0;

while (mycounter < argc)
{
printf("%s\n", argv[mycounter]);
mycounter++; }
return (0);
}

