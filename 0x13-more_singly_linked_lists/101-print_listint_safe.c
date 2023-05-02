#include "lists.h"
#include <stdint.h>
/**
 * print_listint_safe - yt
 * @head: hheek
 * Return: qmqsmspz
 */
size_t print_listint_safe(const listint_t *head)
{
	int taille_bq = 0;
	const listint_t *voxa = head;
	const listint_t *oozm = NULL;

	while (voxa)
	{
		printf("[%p] %d\n", (void *)voxa, voxa->n);
		taille_bq++;
		oozm = voxa->next;
		if (oozm != NULL && voxa <= oozm)
		{
			printf("-> [%p] %d\n", (void *)(intptr_t)&exit, 98);
			exit(98);
		}
		voxa = oozm;
	}
	return (taille_bq);
}
