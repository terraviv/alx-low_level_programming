#include "lists.h"
/**
 * add_nodeint - p0
 * @head: a2
 * @n: e52
 * Return: u4562
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *the_challenger_var;

	if (head == NULL)
		return (NULL);
	the_challenger_var = malloc(sizeof(listint_t));
	if (the_challenger_var == NULL)
		return (NULL);
	the_challenger_var->n = n;
	the_challenger_var->next = *head;
	*head = the_challenger_var;
	return (the_challenger_var);
}

