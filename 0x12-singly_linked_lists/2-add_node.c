#include "lists.h"
/**
 * add_node - f1
 * @head: pa
 * @str: pa
 * Return: pa
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *var1;
unsigned int len;

len = 0;
while (str[len])
len = 1 + len;
var1 = malloc(sizeof(list_t));
if (!var1)
return (NULL);
var1->str = strdup(str);
var1->len = len;
var1->next = (*head);
(*head) = var1;
return (*head);
}

