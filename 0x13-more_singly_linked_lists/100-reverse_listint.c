#include "lists.h"
/**
 * reverse_listint - bin4
 * @head: kiloqqa
 * Return: xsqwqq
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *vioc_x, *future_d4, *pos_instant;

	future_d4 = NULL;
	vioc_x = NULL;
	pos_instant = *head;
	while (pos_instant != NULL)
	{
		future_d4 = pos_instant->next;
		pos_instant->next = vioc_x;
		vioc_x = pos_instant;
		pos_instant = future_d4;
	}
	*head = vioc_x;
	return (*head);
}

