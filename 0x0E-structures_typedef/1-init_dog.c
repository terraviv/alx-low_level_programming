#include "dog.h"
#include <stddef.h>
/**
 * init_dog - dog init
 * @d: param
 * @name: param
 * @age: param
 * @owner: param
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->age = age;
d->name = name;
d->owner = owner;
}
}

