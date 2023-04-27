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
var2  = *head;
unsigned int len;
len = 0;
while (str[len])
len = 1 + len;
my_mode = malloc(sizeof(list_t));
if (my_mode == NULL)
return (NULL);
my_mode->str = strdup(str);
my_mode->len = len;
my_mode->next = NULL;
if (*head == NULL)
{
*head = my_mode;
return (my_mode);
}
while (var2->next)
var2 = var2->next;
var2->next = my_mode;
return (my_mode);
}

