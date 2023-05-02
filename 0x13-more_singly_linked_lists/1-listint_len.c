#include "lists.h"
/**
 * listint_len - om7822
 * @h: v41
 * Return: x1
 */
size_t listint_len(const listint_t *h)
{
	size_t pavloveniauvgt;

pavloveniauvgt = 0;

	while (h != NULL)
	{
		pavloveniauvgt = 1 + pavloveniauvgt;
		h = h->next;
	}
	return (pavloveniauvgt);
}

