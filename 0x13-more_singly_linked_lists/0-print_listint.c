#include "lists.h"
/**
 * print_listint - h1
 * @h: vp4
 * Return: sou
 */
size_t print_listint(const listint_t *h)
{
	size_t me_varalbes;

	me_varalbes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		me_varalbes = 1 + me_varalbes;
		h = h->next;
	}
	return (me_varalbes);
}

