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
/**
 * insert_nodeint_at_index - p5
 * @head: varin1
 * @idx: saqd
 * @n: hgg
 * Return: myitt
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *imedia, *el_challanca;
	unsigned int the_counter;

	imedia = *head;
	if (idx == 0)
		return (add_nodeint(head, n));
	if (!head)
		return (NULL);
	for (the_counter = 0; imedia != NULL && the_counter < idx - 1; the_counter++)
		imedia = imedia->next;
	if (the_counter != idx - 1)
		return (NULL);
	el_challanca = malloc(sizeof(listint_t));
	if (!el_challanca)
		return (NULL);
	el_challanca->n = n;
	el_challanca->next = imedia->next;
	imedia->next = el_challanca;
	return (el_challanca);
}

