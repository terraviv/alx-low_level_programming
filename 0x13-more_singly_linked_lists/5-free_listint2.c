#include "lists.h"
/**
 * free_listint2 - b12
 * @head: fone7
 * Return: nothing to give
 */
void free_listint2(listint_t **head)
{
	listint_t *repel_kid_variable;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		repel_kid_variable = *head;
		*head = repel_kid_variable->next;
		free(repel_kid_variable);
	}
	*head = NULL;
}

