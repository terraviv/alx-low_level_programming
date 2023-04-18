#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - f2
 * @name: input
 * @age: input
 * @owner: input
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_doggy;

if (owner == NULL || name == NULL)
{
return (NULL); }
my_doggy = malloc(sizeof(dog_t));
if (my_doggy == NULL)
{
return (NULL); }
my_doggy->name = malloc(sizeof(char) * (1 + strlen(name)));
if (my_doggy->name == NULL)
{
free(my_doggy);
return (NULL); }
my_doggy->owner = malloc(sizeof(char) * (1 + strlen(owner)));
if (my_doggy->owner == NULL)
{
free(my_doggy);
free(my_doggy->name);
return (NULL); }
strcpy(my_doggy->name, name);
strcpy(my_doggy->owner, owner);
my_doggy->age = age;
return (my_doggy);
}

