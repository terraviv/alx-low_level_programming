#include "lists.h"
/**
 * add_node_end - f1
 * @head: pc
 * @str: pc
 * Return: pc
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *my_mode, *var2;

my_mode = malloc(sizeof(list_t));
if (my_mode == NULL)
return (NULL);
my_mode->str = strdup(str);
if (my_mode->str)
{
free(my_mode);
return (NULL);
}
my_mode->len = strlen(str);
my_mode->next = NULL;
if (*head == NULL)
{
*head = my_mode;
return (my_mode);
}
var2  = *head;
while (var2->next)
var2 = var2->next;
var2->next = my_mode;
return (my_mode);
}

