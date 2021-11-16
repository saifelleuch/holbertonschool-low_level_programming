#include "lists.h"

/**
 * free_listint - function that frees a list_t list.
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{

	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}

}
