#include "lists.h"

/**
 * free_dlistint - function function that frees a dlist_t list.
 * @head: pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
