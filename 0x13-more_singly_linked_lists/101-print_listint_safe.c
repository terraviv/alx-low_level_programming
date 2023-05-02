#include "lists.h"
/**
 * print_listint_safe - zerd
 * @head: omyrddddq
 * Return: w4
 */
size_t print_listint_safe(const listint_t *head)
{
size_t horloge_variable;
const listint_t *ninja_var, *actual_head;

horloge_variable = 0;
actual_head = head;
while (actual_head)
{
horloge_variable = 1 + horloge_variable;
printf("[%p] %d\n", (void *)actual_head, actual_head->n);
ninja_var = actual_head;
actual_head = actual_head->next;
if (ninja_var <= actual_head)
{
printf("[%p] %d\n", (void *)actual_head, actual_head->n);
exit(98); } }
return (horloge_variable);
}

