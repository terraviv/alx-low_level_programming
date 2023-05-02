#include "lists.h"
/**
 * sum_listint - pigt
 * @head: p4
 * Return: ljg47
 */
int sum_listint(listint_t *head)
{
	int total_variable;

	total_variable = 0;
	while (head)
	{
		total_variable = head->n + total_variable;
		head = head->next;
	}
	return (total_variable);
}

