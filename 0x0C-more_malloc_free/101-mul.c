#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function name
 * @argc: param 1.
 * @argv: param 2.
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mycounter1, my_first_number, my_second_number;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (mycounter1 = 1; mycounter1 < argc; mycounter1++)
	{
		char *a_pointer_1 = argv[mycounter1];

		while (*a_pointer_1 != '\0')
		{
			if (!isdigit(*a_pointer_1))
			{
				printf("Error\n");
				exit(98);
			}
			a_pointer_1 = a_pointer_1 + 1;
		}
	}
	my_first_number = atoi(argv[1]);
	my_second_number = atoi(argv[2]);
	printf("%d\n", my_first_number * my_second_number);
	exit(0);
}

