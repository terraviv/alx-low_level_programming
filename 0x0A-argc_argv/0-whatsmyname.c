#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * main - shows whatsmyname
 * @argc: param 1
 * @argv: param 2
 * Return: an integer is return.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	write(STDOUT_FILENO, argv[0], strlen(argv[0]));
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}

