#include "lists.h"
/**
 * get_nodeint_at_index - orc1
 * @head: res45
 * @index: fujie
 * Return: pm47
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *voix_change_varible;
	unsigned int cpt_1;

	voix_change_varible = head;
	cpt_1 = 0;
	while (cpt_1 < index && voix_change_varible != NULL)
	{
		voix_change_varible = voix_change_varible->next;
		cpt_1 = 1 + cpt_1;
	}
if (cpt_1 == index)
return (voix_change_varible);
return (NULL);
}

