#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - f1
 * @infos: pa1
 * Return: nothing
 */
void print_dog(struct dog *infos)
{
	if (infos == NULL)
		return;
	printf("Name: %s\n", (infos->name == NULL) ? "(nil)" : infos->name);
	printf("Age: %f\n", infos->age);
	printf("Owner: %s\n", (infos->owner == NULL) ? "(nil)" : infos->owner);
}

