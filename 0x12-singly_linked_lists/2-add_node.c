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
unsigned int yum;
yum = 0;

while (str[yum])
yum++;

var1 = malloc(sizeof(list_t));
if (!var1)
return (NULL);
var1->str = strdup(str);
var1->yum = yum;
var1->next = (*head);
(*head) = var1;
return (*head);
}

