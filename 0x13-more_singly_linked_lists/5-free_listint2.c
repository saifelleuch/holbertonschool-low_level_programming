#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 */

void free_listint2(listint_t **head)
{

	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
