#include "lists.h"
/**
 * list_len - f2
 * @h: pb
 * Return: pb
 */
size_t list_len(const list_t *h)
{
size_t tot;

tot = 0;

while (h)
{
tot = 1 + tot;
h = h->next;
}
return (tot);
}

