#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that create array
 * @size: param 1.
 * @c: param 2.
 * Return: NULL OR AN ARRAY.
 *
 */
char *create_array(unsigned int size, char c)
{
char *my_array = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL); }
if (my_array == 0)
{
return (NULL); }
for (unsigned int j; j < size; j++)
{
my_array[j] = c; }
return (str);
}

