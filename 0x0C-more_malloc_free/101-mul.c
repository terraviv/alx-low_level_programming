#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - function name
 * @argc: param 1.
 * @argv: param 2.
 * Return: an integer is return.
 */
int main(int argc, char *argv[])
{
	int mycounter1, mycounter2, length_of_my_input_first_number, length_of_my_input_second_number, *my_output_var;
	char *my_input_first_number = argv[1];
	char *my_input_second_number = argv[2];
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	length_of_my_input_second_number = strlen(my_input_second_number);
	length_of_my_input_first_number = strlen(my_input_first_number);
	for (mycounter1 = 0; mycounter1 < length_of_my_input_first_number; mycounter1++)
	{
		if (!isdigit(my_input_first_number[mycounter1]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (mycounter1 = 0; mycounter1 < length_of_my_input_second_number; mycounter1++)
	{
		if (!isdigit(my_input_second_number[mycounter1]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	my_output_var = malloc(sizeof(int) * (length_of_my_input_second_number + length_of_my_input_first_number + 1));
	if(!my_output_var)
		return (1);
	for (mycounter1 = length_of_my_input_first_number -1; mycounter1 >= 0; mycounter1--)
	{
		int my_carry_var = 0;
		for (mycounter2 = length_of_my_input_second_number - 1; mycounter2>=0; mycounter2--)
		{
			int my_digit_variable = (my_input_second_number[mycounter2] - '0') * (my_input_first_number[mycounter1] - '0') + my_carry_var + my_output_var[1+mycounter1+mycounter2];
			my_carry_var = my_digit_variable / 10;
			my_output_var[1+mycounter1+mycounter2] = my_digit_variable % 10;
		}
		my_output_var[mycounter1] = my_output_var[mycounter1] + my_carry_var;
	}
	mycounter1 = 0;
	while (mycounter1 < (length_of_my_input_second_number + length_of_my_input_first_number) && my_output_var[mycounter1] == 0)
		mycounter1 = 1 + mycounter1;
	for (; mycounter1 < length_of_my_input_second_number + length_of_my_input_first_number; mycounter1++)
		printf("%d", my_output_var[mycounter1]);
	printf("\n");
	free(my_output_var);
	return (0);
}

