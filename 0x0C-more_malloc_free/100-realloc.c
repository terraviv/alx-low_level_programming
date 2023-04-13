#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *my_brand_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	my_brand_ptr = malloc(new_size);
	if (my_brand_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(my_brand_ptr, ptr, old_size);
	else
		memcpy(my_brand_ptr, ptr, new_size);
	free(ptr);
	return (my_brand_ptr);
}

