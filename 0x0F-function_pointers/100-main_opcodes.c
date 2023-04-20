#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal
 * @argc: element
 * @argv: element
 * Return: an integer is return
 */
int main(int argc, char **argv)
{
	int myval1, mycounter;
	char *my_list;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	myval1 = atoi(argv[1]);
	if (myval1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	my_list = (char *)main;
	mycounter = 0;
	while (mycounter < myval1)
	{
		if (mycounter == myval1 - 1)
		{
			printf("%02hhx\n", my_list[mycounter]);
			break;
		}
		printf("%02hhx ", my_list[mycounter]);
		mycounter++;
	}
	return (0);
}

