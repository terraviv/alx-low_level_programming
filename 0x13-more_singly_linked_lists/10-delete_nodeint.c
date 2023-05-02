#include "lists.h"
/**
 * delete_nodeint_at_index - knot
 * @head: winf
 * @index: caliyg
 * Return: something repel.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present_variable, *el_interdiaros;
	unsigned int cpti_variable;

	el_interdiaros = *head;
	cpti_variable = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		el_interdiaros = *head;
		*head = (*head)->next;
		free(el_interdiaros);
		return (1);
	}
	while (cpti_variable < index && el_interdiaros)
	{
		present_variable = el_interdiaros;
		el_interdiaros = el_interdiaros->next;
		cpti_variable = 1 + cpti_variable;
	}
	if (cpti_variable != index)
		return (-1);
	present_variable->next = el_interdiaros->next;
	free(el_interdiaros);
	return (1);
}

