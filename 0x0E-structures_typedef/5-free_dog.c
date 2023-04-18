#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - f3
 * @d: input
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

