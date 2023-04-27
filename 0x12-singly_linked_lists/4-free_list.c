#include "lists.h"

/**
 * free_list - pj
 * @head: pj
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *pos;
while (head != NULL)
{
pos = head->next;
free(head->str);
free(head);
head = pos;
}
}

