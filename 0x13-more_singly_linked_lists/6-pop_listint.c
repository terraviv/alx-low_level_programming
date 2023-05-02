#include "lists.h"
/**
 * pop_listint - rooea
 * @head: maser
 * Return: 70ze
 */
int pop_listint(listint_t **head)
{
	int var_ubusevgzq;
	listint_t *yum_ball_champ;

	if (*head == NULL)
		return (0);
	if (head == NULL)
		return (0);
	yum_ball_champ = *head;
	var_ubusevgzq = yum_ball_champ->n;
	*head = (*head)->next;
	free(yum_ball_champ);
	return (var_ubusevgzq);
}

