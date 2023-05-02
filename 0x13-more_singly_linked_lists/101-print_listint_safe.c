#include "lists.h"
/**
 * print_listint_safe - zerd
 * @head: omyrddddq
 * Return: w4
 */
size_t print_listint_safe(const listint_t *head)
{
size_t horloge_variable;
const listint_t *ninja_var;

horloge_variable = 0;
while (head)
{
ninja_var = head;
head = head->next;
horloge_variable = 1 + horloge_variable;
printf("[%p] %d\n", (void *)ninja_var, ninja_var->n);
if (ninja_var <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98); } }
return (horloge_variable);
}

