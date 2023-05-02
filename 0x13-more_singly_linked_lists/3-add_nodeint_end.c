#include "lists.h"
/**
 * add_nodeint_end - ev4
 * @head: zanka tyu
 * @n: pln4
 * Return: 70y
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *baby_the_chollenger_var, *l_intermedieros;

	l_intermedieros = *head;
	baby_the_chollenger_var = malloc(sizeof(listint_t));
	if (baby_the_chollenger_var == NULL)
		return (NULL);
	baby_the_chollenger_var->n = n;
	baby_the_chollenger_var->next = NULL;
	if (!*head)
	{
		*head = baby_the_chollenger_var;
		return (baby_the_chollenger_var);
	}
	while (l_intermedieros->next != NULL)
		l_intermedieros = l_intermedieros->next;
	l_intermedieros->next = baby_the_chollenger_var;
	return (baby_the_chollenger_var);
}

