#include "lists.h"
/**
 * free_listint - k45
 * @head: voicyd
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *transient_m_var;

	while (head != NULL)
	{
		transient_m_var = head;
		head = head->next;
		free(transient_m_var);
	}
}

