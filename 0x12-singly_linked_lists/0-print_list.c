#include "lists.h"
/**
 * print_list - f1
 * @h: pa
 * Return: pa
 */
size_t print_list(const list_t *h)
{
size_t mycpt;

mycpt = 0;
while (h != NULL)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
mycpt = 1 + mycpt;
}
return (mycpt);
}

